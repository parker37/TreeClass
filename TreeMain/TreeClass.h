#pragma once
#ifndef TREECLASS
#define TREECLASS
#include <iostream>
using namespace std;

class TreeClass
{
    struct Node
    {
        int data;
        Node* left, * right;

    };

    Node* newNode(int key)
    {
        Node* node = new Node;
        node->data = key;
        node->left = nullptr;
        node->right = nullptr;
        return node;
    }

    void inorder(Node* root);
    Node* insert(Node* root, int key);
};

#endif