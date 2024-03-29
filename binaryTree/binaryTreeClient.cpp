#include <iostream>
#include "binarytreenode.hpp"

void print(binaryNode* node)
{
    if (node != nullptr)
    {
        std::cout << node->data<< "  "; //pre-order traversal
        print(node->left);
        //std::cout << node->data << "\n"; //in-order traversal
        print(node->right);
        //std::cout << node->data << "\n"; //post-order traversal
    }
}

void add(binaryNode*& node, int value)
{
    if (node == nullptr)
        node = new binaryNode(value);
    else if (node->data > value)
        add(node->left, value);
    else if (node->data < value)
        add(node->right, value);
}

bool contains(binaryNode* node, int value)
{
    if (node != nullptr)
    {
        if (node->data == value)
            return true;
        if (contains(node->left, value)|| contains(node->right, value))
            return true;
    }
    return false;
}

int getMin(binaryNode* node)
{
    if (node->left == nullptr)
        return node->data;
    return getMin(node->left);
}

int getMax(binaryNode* node)
{
    if (node->right == nullptr)
        return node->data;
    return getMax(node->right);
}

bool binaryContains(binaryNode* node, int value)
// only if the given btree is a BST
{
    if (node != nullptr)
    {
        if (node->data == value)
            return true;
        if (node->data > value)
            return binaryContains(node->left, value);
        if (node->data < value)
            return binaryContains(node->right, value);
    }
    return false;
}


int main()
{
//This is our Binary Tree
/*               55
 *            /     \
 *          29      87
 *          / \     / \
 *        -3  42  60   91
 *                  \
 *                   88
 */

    binaryNode* root = new binaryNode(55);
    root->left = new binaryNode(29);
    root->left->left = new binaryNode(-3);
    root->left->right = new binaryNode(42);
    root->right = new binaryNode(87);
    root->right->left = new binaryNode(60);
    root->right->right = new binaryNode(91);
    root->right->right->left = new binaryNode(88);
    // print tree
    print(root);
    std::cout << "\n";
    // search for elements
    std::cout << std::boolalpha << contains(root, 0) << "\n";
    std::cout << std::boolalpha << contains(root, 55) << "\n";
    std::cout << std::boolalpha << contains(root, -3) << "\n";
    std::cout << std::boolalpha << contains(root, 88) << "\n";
    std::cout << std::boolalpha << contains(root, 91) << "\n";
    std::cout << std::boolalpha << contains(root, 420) << "\n";
    std::cout << std::boolalpha << contains(root, 69) << "\n";

//Need a BST for this
/*              55
 *            /   \
 *          29     87
 *          / \    / \
 *        -3  42  60  91
 *                    /
 *                   88
 */
    binaryNode* broot = new binaryNode(55);
    broot->left = new binaryNode(29);
    broot->left->left = new binaryNode(-3);
    broot->left->right = new binaryNode(42);
    broot->right = new binaryNode(87);
    broot->right->left = new binaryNode(60);
    broot->right->right = new binaryNode(91);
    broot->right->right->left = new binaryNode(88);
    print(broot);
    std::cout << "\n";
    // search for elements
    std::cout << std::boolalpha << binaryContains(broot, 0) << "\n";
    std::cout << std::boolalpha << binaryContains(broot, 55) << "\n";
    std::cout << std::boolalpha << binaryContains(broot, -3) << "\n";
    std::cout << std::boolalpha << binaryContains(broot, 88) << "\n";
    std::cout << std::boolalpha << binaryContains(broot, 91) << "\n";
    std::cout << std::boolalpha << binaryContains(broot, 420) << "\n";
    std::cout << std::boolalpha << binaryContains(broot, 69) << "\n";
    std::cout << "Minimum element in the tree is " << getMin(broot) << "\n";
    std::cout << "Maximum element in the tree is " << getMax(broot) << "\n";
    add(broot, 69);
    add(broot, 420);
    // print tree
    std::cout << "broot - ";
    print(broot);
    std::cout << "\n";
    binaryNode* newbroot = nullptr;
    add(newbroot, 11);
    add(newbroot, 29);
    add(newbroot, 56);
    std::cout << "newbroot - ";
    print(newbroot);
    std::cout << "\n";
    return 0;
}
