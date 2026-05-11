#include <iostream>
#include <fstream>
#include <string>
#include "StrBinaryTree.h"
using namespace std;

// COMSC-210 | Lab 36 | Ian Kusmiantoro

int main() {

    // Init Binary Tree
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

    // Menu
    int choice = -1;
    while (choice != 8) {
        cout << "[1] Display In-Order" << endl;
        cout << "[2] Display Pre-Order" << endl;
        cout << "[3] Display Post-Order" << endl;
        cout << "[4] Insert New Code" << endl;
        cout << "[5] Delete Code" << endl;
        cout << "[6] Search For Code" << endl;
        cout << "[7] Replace Code" << endl;
        cout << "[8] Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1) {
            tree.displayInOrder();
        } else if (choice == 2) {
            tree.displayPreOrder();
        } else if (choice == 3) {
            tree.displayPostOrder();
        } else if (choice == 4) {
            cout << "Enter new code: ";
            cin >> code;
            tree.insertNode(code);
        } else if (choice == 5) {
            cout << "Enter code to delete: ";
            cin >> code;
            tree.remove(code);
        } else if (choice == 6) {
            cout << "Enter code to search: ";
            cin >> code;
            if (tree.searchNode(code)) {
                cout << "Code found!" << endl;
            } else {
                cout << "Code not found!" << endl;
            }
        } else if (choice == 7) {
            cout << "Enter code to replace: ";
            cin >> code;
            tree.remove(code);

            cout << "Enter replacement code: ";
            cin >> code;
            tree.insertNode(code);
        } else if (choice != 8) {
            cout << "Invalid Option!" << endl;
        }
        cout << endl;
    }

    fin.close();

    return 0;
}