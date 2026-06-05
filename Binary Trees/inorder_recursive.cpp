// Inorder Traversal of a Binary Tree (Recursive Approach)
// TC: O(N) where N is the number of nodes in the binary tree
// SC: O(N) in the worst case (skewed tree), O(log N) in the best case (balanced tree))
// LC 94

#include <bits/stdc++.h>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    void solve(TreeNode* node, vector<int>&soln){
        if(node==NULL) return;
        solve(node->left,soln);
        soln.push_back(node->val);
        solve(node->right,soln);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>soln;
        solve(root,soln);
        return soln;
    }
};