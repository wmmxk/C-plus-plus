#include <iostream>
using namespace std;

class BST
{   
 	private:
    struct node 
     {
        int data;
								node *right;
								node *left;
		  	};

			 node * root;


	public:
				BST()
				{
       node *n = new node;
							n->data = 1;
							n->right = nullptr;
							n->left = nullptr;
				}
				~BST()
    { delete root; }


				void printTree()
				{
								cout << root->data << " ";
    }

};




int main()
{

			BST myTree;

			myTree.printTree();

   return 0;
}
