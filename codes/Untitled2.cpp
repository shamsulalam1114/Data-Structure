#include <iostream>

using namespace std;


struct Node
{
    int data;
    Node* left;
    Node* right;


    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


Node* insertNode(Node* root, int val)
{
    if (root == nullptr)
    {
        return new Node(val);
    }


    if (val < root->data)
    {
        root->left = insertNode(root->left, val);
    }

    else if (val > root->data)
    {
        root->right = insertNode(root->right, val);
    }
    return root;
}


void inorderTraversal(Node* root)
{
    if (root != nullptr)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}


void preorderTraversal(Node* root)
{
    if (root != nullptr)
    {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}


void postorderTraversal(Node* root)
{
    if (root != nullptr)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
}


bool search(Node* root, int key)
{
    if (root == nullptr)
    {
        return false;
    }

    if (root->data == key)
    {
        return true;
    }

    else if (key < root->data)
    {
        return search(root->left, key);
    }

    else
    {
        return search(root->right, key);
    }
}

int main()
{
    Node* root = nullptr;
    int val;


    cout << "Enter 6 values to insert into the BST:" << endl;
    for (int i = 0; i < 6; ++i)
    {
        cin >> val;
        root = insertNode(root, val);
    }


    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;


    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    if (search(root, key)) {
        cout << key << " found in the BST." << endl;
    } else {
        cout << key << " not found in the BST." << endl;
    }

    return 0;
}
