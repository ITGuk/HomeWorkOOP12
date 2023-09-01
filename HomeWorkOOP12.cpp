#include <iostream>
#include "Node.h"
using namespace std;

int main() {
    Node* head = nullptr;

    putNodeToTail(head, 1);
    putNodeToTail(head, 2);
    putNodeToTail(head, 3);
    putNodeToTail(head, 4);
    putNodeToTail(head, 5);
    putNodeToTail(head, 6);

    display(head);

    removeNumbers(head, 2);
    cout << "\nNegative elements: " << negative_elevents(head) << endl << endl;
    display(head);

}