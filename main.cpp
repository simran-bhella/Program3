#include "Concept.h"
#include "RedBlack.cpp"

int main() {
    cout << "-- start --" << endl;

    Concept c;

    map<string,string> data;

    data["website"] = "www.c++ref.com";
    data["rating"] = "5";
    data["comment"] = "Very good website";
    data["valid"] = "1";
    data["Concept"] = "map";
    data["Benefit"] = "key value pair";
    data["Drawback"] = "only one type";


    c.create_concept("Modern", data);

//    b.insert(&c, "Modern");

    RBTree tree;

    tree.insert(7);
    tree.insert(6);
    tree.insert(5);
    tree.insert(4);
    tree.insert(3);
    tree.insert(2);
    tree.insert(1);

    cout << "Inorder Traversal of Created Tree\n";
    tree.inorder();

    cout << "\n\nLevel Order Traversal of Created Tree\n";
    tree.levelOrder();

    return 0;
}
