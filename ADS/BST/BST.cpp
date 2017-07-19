#include "BST.h"
 
BST::BST(){
    root = nullptr;
}
 
BST::node* BST::createLeaf(int key){
    node* n = new node;
    n->data = key;
    n->right = nullptr;
    n->left = nullptr;
    return n;
}
 
void BST::addLeaf(int key){
    addLeafPrivate(key, root);
}
 
void BST::addLeafPrivate(int key, node* ptr){
    if (root == nullptr)
        root = createLeaf(key);
    else if (key < ptr->data){
        if (ptr->left != nullptr)
            addLeafPrivate(key, ptr->left);
        else
            ptr->left = createLeaf(key);
    }
    else if (key > ptr->data){
        if (ptr->right != nullptr)
            addLeafPrivate(key, ptr->right);
        else
            ptr->right = createLeaf(key);
    }
    else
        cout << "Your tree already contains " << key << " value" << endl;
}
 
void BST::printTree(){
    printTreePrivate(root);
    cout << endl;
}
 
void BST::printTreePrivate(node* ptr){
    if (root == nullptr)
        cout << "Your Tree is Empty" << endl;
    else{
        if (ptr->left != nullptr)
            printTreePrivate(ptr->left);
        cout << ptr->data << ' ';
        if (ptr->right != nullptr)
            printTreePrivate(ptr->right);
    }
}
 
  
BST::~BST(){
    removeSubtree(root);
}
void BST::removeSubtree(node* ptr){
    if (ptr != nullptr){
        if (ptr->left != nullptr)
            removeSubtree(ptr->left);
        if (ptr->right != nullptr)
            removeSubtree(ptr->right);
        delete ptr;
    }
}
