#pragma once
#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        this->next = nullptr;
    }

    Node() {
        this->value = 0;
        this->next = nullptr;
    }
};

void putNodeToTail(Node*& head, int value);
void display(Node* head);
bool removeNumber(Node*& head, int num);
void removeNumbers(Node*& head, int num);
int negative_elevents(Node* head);
