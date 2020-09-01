/** 103. Binary Tree Zigzag Level Order Traversal
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
    /*
    Runtime: 4 ms, faster than 83.27% of C++ online submissions for Binary Tree Zigzag Level Order Traversal.
    Memory Usage: 13.1 MB, less than 5.10% of C++ online submissions for Binary Tree Zigzag Level Order Traversal.
    */
    void bfs(int depth, TreeNode * root, vector<vector<int>> & levels){
        if(root != nullptr){
            if(levels.size() <= depth)
                levels.push_back({});
            if(depth%2 == 0) // even ->normal order
                levels[depth].push_back(root->val);
            else {// odd -> reverse order
                auto it = levels[depth].begin();
                levels[depth].insert(it, root->val);
            }
            bfs(depth+1, root->left, levels);
            bfs(depth+1, root->right, levels);
        }
    }
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> levels;
        bfs(0, root, levels);

        return levels;
        
    }
};