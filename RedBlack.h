#include "Concept.h"
#include <bits/stdc++.h>

#ifndef PROGRAM3_REDBLACK_H
#define PROGRAM3_REDBLACK_H


enum Color {RED, BLACK};

struct Node
{
    int data;
    bool color;
    Node *left, *right, *parent;

    // Constructor
    Node(int data)
    {
        this->data = data;
        left = right = parent = NULL;
        this->color = RED;
    }
};

// Class to represent Red-Black Tree
class RBTree
{
private:
    Node *root;
protected:
    void rotateLeft(Node *&, Node *&);
    void rotateRight(Node *&, Node *&);
    void fixViolation(Node *&, Node *&);
public:
    // Constructor
    RBTree() { root = NULL; }
    void insert(const int &n);
    void inorder();
    void levelOrder();
};

/*
class Node {
public:
    Node(Concept * data, string type);
    Concept * get_data();
    Node * get_left();
    Node * get_right();
    Node * get_parent();
//protected
    Node * left;
    Node * right;
    Node * parent;
    string balance;

};

class Tree {
    Tree();
    void insert(Concept *data, string type);

//protected
    Node * root;
};




*/
#endif PROGRAM3_REDBLACK_H
