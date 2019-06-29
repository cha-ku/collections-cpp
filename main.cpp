#include "node.h"

void printList(Node* const front) {
    Node* current = front;
    while(current != nullptr) {
        std::cout << current->value << " ";
        current = current->next;
        }
    }

void addFront(Node*& front, int value) {
    Node* temp = new Node(value);
    temp->next = front;
    front = temp;
}

int main()
{
    Node* list = nullptr;
    addFront(list, 56);
    addFront(list, 34);
    addFront(list, -1);
    addFront(list, -17);
    printList(list);
}
