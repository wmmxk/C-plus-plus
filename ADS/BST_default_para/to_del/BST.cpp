#include "BST.h"

BST::BST()
{
  root = nullptr;
}

BST::node* BST::createLeaf(int key)
{
    node *n = new node;
				n->data = key;
				n->right = nullptr;
				n->left = nullptr;
				return n;
}


void BST::addLeaf(int key, node *ptr = root)
{
   if (root == nullptr)
				  root = createLeaf(key);

			else if (key < ptr->data)
			{
      if (ptr->left != nullptr)
							  addLeaf(key, ptr->left);
      else
							  ptr->left = createLeaf(key);
			}

   else if (key > ptr->data)
			{
       if (ptr->right != nullptr)
								  addLeaf(key,ptr->right);
							else
								  ptr->right = createLeaf(key);
			}
			
			else
				  cout << "Your tree already contains " << key << endl;
}

void BST::printTree(node *ptr = root)
{
   if (root == nullptr)
				  cout << "Your tree is empty " << endl;

			else 
			{
      if (ptr->left != nullptr)
							  printTree(ptr->left);

					cout << ptr->data << " ";
     
					if (ptr->right != nullptr)
						   printTree(ptr->right);
			}
}


BST::~BST()
{
   delete root;

}
