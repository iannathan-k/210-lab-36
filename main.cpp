#include <iostream>
#include "StrBinaryTree.h"
using namespace std;

// COMSC-210 | Lab 36 | Ian Kusmiantoro

int main() {

    // Testing the tree stuff
    StrBinaryTree tree = StrBinaryTree();
    tree.insertNode("Alice");
    tree.insertNode("Bob");
    tree.insertNode("Eve");
    tree.insertNode("Able");
    tree.insertNode("Baker");

    cout << "Inorder Traversal" << endl;
    tree.displayInOrder();
    cout << endl;

    tree.remove("Bob");
    cout << "Preorder Traversal" << endl;
    tree.displayPreOrder();
    cout << endl;

    cout << "Inorder Traversal" << endl;
    tree.remove("Able");
    tree.remove("Alice");
    tree.displayInOrder();

    cout << tree.searchNode("Eve") << endl;
    cout << tree.searchNode("Alice") << endl;

    return 0;
}