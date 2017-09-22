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
				node* createLeaf(int key)
    {
        node *n = new node;
				   n->data = key;
				   n->right = nullptr;
				   n->left = nullptr;
				   return n;
    }



	public:
				BST()
				{
       node *n = new node;
							n->data = NULL;
							n->right = nullptr;
							n->left = nullptr;
				}
				~BST()
    { delete root; }



				void addLeaf(int key, node * ptr = root)
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



				void printTree(node * ptr = root)
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


};




int main()
{
   int treeData[7] = {11,114,18,113,15,25,37};

			BST myTree;

			for (int i =0; i<7; i++)
      myTree.addLeaf(treeData[i]);


			myTree.printTree();

   return 0;
}
