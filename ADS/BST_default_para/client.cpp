#include "BST.h"
#include <iostream>

int main()


{
   int treeData[7] = {11,114,18,113,15,25,37};

			BST myTree;

			for (int i =0; i<7; i++)
      myTree.addLeaf(treeData[i]);


			myTree.printTree();

   return 0;
}
