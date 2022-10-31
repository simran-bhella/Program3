#include "BST.h"

//BST will sort by rating

BSTNode::BSTNode() {}
BST::BST() {}

//this may not work, might need to upcast in a seperate function
LLLNode::LLLNode(Concept * data, string type){
    if (type == "STL") {
        this->data = dynamic_cast<STL*>(data);
    }

    if (type == "Modern") {
        this->data = dynamic_cast<Modern*>(data);
    }

    if (type == "Python") {
        this->data = dynamic_cast<Python*>(data);
    }
}


LLLNode* BSTNode::gethead() {
    return head;
}

BSTNode *BSTNode::getleft() {
    return left;
}

BSTNode *BSTNode::getright() {
    return right;
}

LLLNode *LLLNode::getnext() {
    return next;
}

Concept LLLNode::getData() {
    return *data;
}


void BST::insert(Concept *data, string type) {
    insertR(data, type, root);
}

void BST::insertR(Concept *data, string type, BSTNode *tmp) {



    if (root->head->data->is_full() == false) {
        root->head = new LLLNode(data, type);
        return;
    }

    if (data == tmp->head->data) {
        LLLNode * llltmp = tmp->head;
        while(llltmp) {
            llltmp = llltmp->next;
        }
        llltmp = new LLLNode(data, type);
    }

    if (data<tmp->head->data) {
        if (!tmp->left) {
            tmp->left = new BSTNode();
        }
        return insertR(data, type, tmp->left);
    }

    if (!tmp->right) {
        tmp->right = new BSTNode();
    }
    return insertR(data, type, tmp->right);

}

void BST::display() {
    displayR(root);
}

void BST::displayR(BSTNode *root) {}

