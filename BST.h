//
// Created by simra on 5/18/2022.
//
#include "Concept.h"

#ifndef PROGRAM3_BST_H
#define PROGRAM3_BST_H


class LLLNode {
public:
    LLLNode (Concept * data, string type);
    Concept getData();
    LLLNode* getnext();
    //will change to protected after logic is complete
//protected:
    LLLNode * next;
    Concept * data;
};

class BSTNode {
public:
    BSTNode();
    LLLNode * gethead();
    BSTNode* getleft();
    BSTNode* getright();
    //will change to protected afer logic is complete
//protected:
    BSTNode * left;
    BSTNode * right;
    LLLNode * head;
};


class BST {
public:
    BST();
    void insert(Concept *data, string type);
    void insertR(Concept * data, string type, BSTNode * root);
    void display();
    void displayR(BSTNode * root);

protected:
    BSTNode * root;
};

#endif //PROGRAM3_BST_H
