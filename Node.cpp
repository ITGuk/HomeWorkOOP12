#include "Node.h"

void putNodeToTail(Node*& head, int value) {
    Node* n = new Node(value);
    if (head == nullptr) {
        head = n;
        return;
    }
    Node* tmp = new Node();
    tmp = head;
    while (tmp->next != nullptr) {
        tmp = tmp->next;
    }
    tmp->next = n;
}
void display(Node* head) {
    Node* temp;    temp = head;
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}



bool removeNumber(Node*& head, int num) {
    if (head->value == num) {
        if (head->next == nullptr)
        {
            head = nullptr;
            return false;
        }
        head = head->next;
        return true;
    }

    Node* tmp = head;

    while (tmp->next != nullptr) {
        if (tmp->next->value == num) {
            if (tmp->next->next == nullptr) {
                tmp->next = nullptr;
                return false;
            }
            tmp->next = tmp->next->next;
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}

void removeNumbers(Node*& head, int num) {
    while (removeNumber(head, num)) {
        cout << num << " was deleted " << endl;
    }
}

int negative_elevents(Node* head)
{
    int counter = 0;
    Node* slider = head;

    while (slider != nullptr)
    {
        if (slider->value < 0)
        {
            counter++;
        }
        slider = slider->next;
    }
    return counter;
}