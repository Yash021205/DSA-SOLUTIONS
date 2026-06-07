//Inorder traversal of binary tree using iterative approach.
//Time Complexity: O(n), where n is the number of nodes in the binary tree.
//Space Complexity: O(n) in the worst case (skewed tree), O(log n) in the best case (balanced tree)
//LC 94

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
public:    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>soln;
        if(root==NULL) return soln;
        stack<TreeNode*> st;
        TreeNode* curr=root;
        while(curr!=NULL || !st.empty()){
            while(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();
            st.pop();
            soln.push_back(curr->val);
            curr=curr->right;
        }
        return soln;
    }
};