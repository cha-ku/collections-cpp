#include <iostream>

typedef struct ListNode
{
    int value;
    ListNode* next;
    ListNode(int v): value(v) {}
} ListNode;

void printList(ListNode* front)
{
    ListNode* current = front;
    while(current != nullptr)
    {
        std::cout << current->value << " ";
        current = current->next;
    }
}

void addFront(ListNode*& front, int value)
{
    ListNode* temp = new ListNode(value);
    temp->next = front;
    front = temp;
}

int main()
{
    ListNode* list = nullptr;
    addFront(list, 10);
    addFront(list, 20);
    addFront(list, -50);
    printList(list);
}
