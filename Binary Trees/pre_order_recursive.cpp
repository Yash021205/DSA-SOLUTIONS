// C++ program to perform pre-order traversal of a binary tree
// Time Complexity: O(n), where n is the number of nodes in the binary tree
// Space Complexity: O(n) in the worst case (skewed tree), O(log n) in the best case (balanced tree)
// LC 144

#include<bits/stdc++.h>
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
    void preorderHelper(TreeNode* node, vector<int>& result) {
        if (node == NULL) {
            return;
        }
        result.push_back(node->val); // Visit the root node
        preorderHelper(node->left, result); // Visit left subtree
        preorderHelper(node->right, result); // Visit right subtree
    }
    vector<int> preorderTraversal(TreeNode* root) {
         vector<int> result;
        preorderHelper(root, result);
        return result;
    }
};