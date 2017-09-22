#include <iostream>
#ifndef BST_H_
#define BST_H_
using namespace std;

struct node 
    {
        int data;
								node *right;
								node *left;
			};


class BST

{   

	private:

				node *root;
				node* createLeaf(int key);

	public:
				BST();
				~BST();
				void addLeaf(int key, node * ptr = root);
				void printTree(node * ptr = root);

};

#endif
