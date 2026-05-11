#include <iostream>
#include <fstream>
#include <string>
#include "StrBinaryTree.h"
using namespace std;

// COMSC-210 | Lab 36 | Ian Kusmiantoro

int main() {
    ifstream fin;
    fin.open("codes.txt");

    if (!fin.good()) {
        cout << "Error in opening file!" << endl;
        return 1;
    }

    StrBinaryTree tree = StrBinaryTree();
    string code; // This is possible because codes have no newlines or spaces
    while (fin >> code) {
        tree.insertNode(code);
    }

    tree.displayInOrder();

    fin.close();

    return 0;
}