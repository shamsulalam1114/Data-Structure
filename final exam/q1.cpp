#include <iostream>
#include <string>

using namespace std;


struct Student
{
    int id;
    string name;
    float cgpa;
    Student* left;
    Student* right;
};


Student* createStudent(int id, const string& name, float cgpa)
{
    Student* newNode = new Student;
    newNode->id = id;
    newNode->name = name;
    newNode->cgpa = cgpa;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}


Student* insertStudent(Student* root, int id, const string& name, float cgpa)
{
    if (root == nullptr)
    {
        return createStudent(id, name, cgpa);
    }

    if (id < root->id)
    {
        root->left = insertStudent(root->left, id, name, cgpa);
    }

    else if (id > root->id)
    {
        root->right = insertStudent(root->right, id, name, cgpa);
    }

    return root;
}


Student* searchStudent(Student* root, int id)
{
    if (root == nullptr || root->id == id)
    {
        return root;
    }

    if (id < root->id)
    {
        return searchStudent(root->left, id);
    }
    else
    {
        return searchStudent(root->right, id);
    }
}


void inorderTraversal(Student* root)
{
    if (root == nullptr)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << "ID: " << root->id << ", Name: " << root->name << ", CGPA: " << root->cgpa << endl;
    inorderTraversal(root->right);
}

int main()
{
    Student* root = nullptr;


    for (int i = 0; i <3; ++i)
    {
        int id;
        string name;
        float cgpa;

        cout << "Enter student " << i + 1 << " information:" << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "CGPA: ";
        cin >> cgpa;


        root = insertStudent(root, id, name, cgpa);
    }


    int searchId;
    cout << "Enter student ID to search: ";
    cin >> searchId;


    Student* foundStudent = searchStudent(root, searchId);
    if (foundStudent)
    {
        cout << "Found student with ID " << searchId << ":" << endl;
        cout << "Name: " << foundStudent->name << ", CGPA: " << foundStudent->cgpa << endl;
    }
    else
    {
        cout << "Student with ID " << searchId << " not found." << endl;
    }


    cout << "All students:" << endl;
    inorderTraversal(root);


    return 0;
}
