#ifndef BST_H_
#define BST_H_
#include <iostream>
using namespace std;
 
class BST{
    struct node{
        int data;
        node *right;
        node *left;
    };
    node *root;
    node* createLeaf(int key);
    void addLeafPrivate(int key, node* ptr);
    void printTreePrivate(node* ptr);
    void removeSubtree(node* ptr);
public:
    BST();
    ~BST();
    void addLeaf(int key);
    void printTree();
     
};

#endif
