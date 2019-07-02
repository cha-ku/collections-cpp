#include "node.h"

void printList(Node* const front) {
    Node* current = front;
    while(current != nullptr) {
        std::cout << current->value << " ";
        current = current->next;
        }
    std::cout << "\n";
    }

void addFront(Node*& front, int value) {
    Node* temp = new Node(value);
    temp->next = front;
    front = temp;
}

void removeFront(Node*& front) {
    Node* trash = front;
    delete trash;
    front = front->next;
}

int length(Node* const front) {
    int len = 0;
    Node* curr = front;
    while(curr != nullptr) {
        len++;
        curr = curr->next;
    }
    return len;
}

void add(Node* const front, int value, int index) {
    Node* curr = front;
    int listLength = length(front);
    if (index < listLength) {
        int iCurr = 0;
        while (iCurr < index) {
        curr = curr->next;
        ++iCurr;
        }
        Node* nextNode = curr->next;
        Node* temp = new Node(value);
        curr->next = temp;
        temp->next = nextNode;
    }
    else {
        std::cout << "Index larger than length\n";
    }
}

int main() {
    Node* list = nullptr;
    addFront(list, 56);
    addFront(list, 34);
    addFront(list, -1);
    addFront(list, -17);
    addFront(list, 290);
    addFront(list, 841);
    printList(list);
    removeFront(list);
    add(list, 69, 3);
    printList(list);
}
