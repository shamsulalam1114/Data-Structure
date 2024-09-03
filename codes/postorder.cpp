
#include <iostream>
using namespace std;


struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


void postorder(TreeNode *ptr)
{
    if (ptr != nullptr)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout << ptr->data << " ";
    }
}

int main()
{

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;


    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
