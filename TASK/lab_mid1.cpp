#include <iostream>
using namespace std;

struct Student
{
    int uniqueID;
    int Completed_Credits;
    float cgpa;
};

int main()
{
    const int MAX_STUDENT = 15;
    Student students[MAX_STUDENT];


    for (int i = 0; i < MAX_STUDENT; ++i)
    {
        cout << "Enter details for Student " << i + 1 << ":" << endl;
        cout << "Unique ID: ";
        cin >> students[i].uniqueID;
        cout << "completed credits: ";
        cin >> students[i].Completed_Credits;
        cout << "CGPA: ";
        cin >> students[i].cgpa;
    }


    cout << "\nStudents more than cgpa 3.60" << endl;
    for (int i = 0; i < MAX_STUDENT; ++i)
    {
        if (students[i].cgpa > 3.60)
        {
            cout << "Unique ID: " << students[i].uniqueID << endl;

            //cout << "-----------------------------" << endl;
        }
    }


    cout << "\nStudents completed more than 60 credits" << endl;
    for (int i = 0; i < MAX_STUDENT; ++i)
    {
        if (students[i].Completed_Credits > 60)
        {
            cout << "Unique ID: " << students[i].uniqueID << endl;

        }
    }

    return 0;
}
