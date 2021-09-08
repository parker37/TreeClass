#include "TreeClass.h"


void TreeClass::inorder(Node* root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

 TreeClass::Node* TreeClass::insert(Node* root, int key)
{
    if (root == nullptr)
    {
        return newNode(key);
    }
    if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    else 
    { 
        root->right = insert(root->right, key); 
    }
   
    return root;
}
