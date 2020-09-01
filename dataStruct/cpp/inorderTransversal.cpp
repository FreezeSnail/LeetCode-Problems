/** 94. Binary Tree Inorder Traversal
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    /*Runtime: 4 ms, faster than 50.82% of C++ online submissions for Binary Tree Inorder Traversal.
    Memory Usage: 8.6 MB, less than 26.45% of C++ online submissions for Binary Tree Inorder Traversal.
    */
    void inorder(TreeNode* root, vector<int> & list){
        if(root){
            inorder(root->left, list);
            list.push_back(root->val);
            inorder(root->right, list);
        }
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> output;
        inorder(root, output);
        return output;
    }
};