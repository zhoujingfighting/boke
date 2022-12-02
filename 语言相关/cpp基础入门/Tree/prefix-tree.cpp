
#include "tree-node.h"
#include <stack>
using namespace std;
/// We define a function to print a tree in prefix order
void printPrefixTree(TreeNode *root) {
  // We use stack to do this
  stack<TreeNode *> treeNodes;
  cout << "Prefix tree is: ";
  while (true) {    
    while (root)    {
      treeNodes.push(root);
      root = root->left;
    }
    if (!treeNodes.empty()) {
      cout << treeNodes.top()->val << " ";
      if (treeNodes.top()->right) {
        root = treeNodes.top()->right;
      }        
      treeNodes.pop();
    } else
      break;
  }
  cout << endl;
}