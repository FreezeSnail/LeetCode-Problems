/**102. Binary Tree Level Order Traversal
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
    
    /*Runtime: 4 ms, faster than 91.61% of C++ online submissions for Binary Tree Level Order Traversal.
    Memory Usage: 13.6 MB, less than 11.60% of C++ online submissions for Binary Tree Level Order Traversal.
    */
    void bfs(int depth, TreeNode * root, vector<vector<int>> & levels){
        if(root != nullptr){
            if(levels.size() <= depth)
                levels.push_back({});
            levels[depth].push_back(root->val);
            bfs(depth+1, root->left, levels);
            bfs(depth+1, root->right, levels);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> levels;
        bfs(0, root, levels);

        return levels;
        
    }
};