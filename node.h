#ifndef NODE_H
#define NODE_H
#include <iostream>

struct Node {
    Node(int x) : value(x), next(nullptr) {}
    int value;
    Node* next;
};

#endif // NODE_H
