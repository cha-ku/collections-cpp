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
    if (index!=0 || index < listLength) {
        int iCurr = 0;
        while (iCurr < index - 1) {
        curr = curr->next;
        ++iCurr;
        }
        Node* nextNode = curr->next;
        Node* temp = new Node(value);
        curr->next = temp;
        temp->next = nextNode;
    }
    else {
        std::cout << "Index zero or larger than length\n";
    }
}

// linton-dawson suggested to add an addend function which
// appends a Node to the list

void addend(Node* const front, int value) {
    Node* curr = front;
    while(curr->next != nullptr)
        curr = curr->next;
    Node* newLastNode = new Node(value);
    curr->next = newLastNode;
}


void removeByIndex(Node* const front, int index) {
    Node* curr = front;
    int listLength = length(front);
    if (index!=0 || index < listLength) {
        int iCurr = 0;
        while (iCurr < index - 1) {
        curr = curr->next;
        ++iCurr;
        }
        Node* prevNode = curr;
        Node* trash = curr->next;
        prevNode->next = curr->next->next;
        delete trash;
    }
    else {
        std::cout << "Index zero or larger than length\n";
    }
}

void removeByValue(Node* const front, int value) {
    Node* curr = front;
    int index = 0;
    while (curr->value != value) {
        ++index;
        curr = curr->next;
    }
    removeByIndex(front, index);
}

//Since we have an addend, why not a removeEnd

void removeEnd(Node* const front) {
    Node* curr = front;
    int listLength = length(front);
    int index = 0;
    while(index != (listLength - 2)) {
        curr = curr->next;
        ++index;
    }
    Node* lastNode = curr->next;
    Node* trash = curr->next->next;
    delete trash;
    lastNode->next = nullptr;
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
    add(list, 420, 3);
    removeByIndex(list, 5);
    printList(list);
    removeByValue(list, -1);
    printList(list);
    addend(list, 51);
    addend(list, 49);
    printList(list);
    removeEnd(list);
    printList(list);
}
