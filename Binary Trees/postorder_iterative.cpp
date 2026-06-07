//Postorder traversal of binary tree using iterative approach.
//Time Complexity: O(n), where n is the number of nodes in the binary tree.
//Space Complexity: O(n) in the worst case (skewed tree), O(log n) in the best case (balanced tree)
//LC 145

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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> soln;
        if(root==NULL) return soln;
        stack<TreeNode*> st1,st2;
        st1.push(root);
        while(!st1.empty()){
            root=st1.top();
            st1.pop();
            st2.push(root);
            if(root->left != NULL){
                st1.push(root->left);
            }
            if(root->right != NULL){
                st1.push(root->right);
            }
        }
        while(!st2.empty()){
            soln.push_back(st2.top()->val);
            st2.pop();
        }
        return soln;
    }
};