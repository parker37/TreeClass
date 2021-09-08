#include <iostream>
#include "TreeClass.h"
using namespace std;

// Data structure to store a BST node


int main() {

    TreeClass root;



    int keys[] = {17, 5, 27, 15, 4, 40};

    Node* root = nullptr;
    for (int key : keys) {
        root = insert(root, key);
    }

    root.inorder(root);

    return 0;
}