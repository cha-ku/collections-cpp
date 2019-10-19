#ifndef BINARYTREENODE_HPP
#define BINARYTREENODE_HPP

struct binaryNode {
    int data;
    binaryNode* left;
    binaryNode* right;

    binaryNode(int x)
    {
        this->data = x;
        this->left = nullptr;
        this->right = nullptr;
    }

    binaryNode(int x, binaryNode* leftVal, binaryNode* rightVal)
    {
        this->data = x;
        this->left = leftVal;
        this->right = rightVal;
    }
};

#endif // BINARYTREENODE_HPP
