#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

// COMSC-210 | Lab 36 | Ian Kusmiantoro

int main() {

    cout << "Hello, World!" << endl;

    IntBinaryTree tree = IntBinaryTree();
    tree.insertNode(5);
    tree.insertNode(3);
    tree.insertNode(7);

    tree.displayInOrder();

    return 0;
}