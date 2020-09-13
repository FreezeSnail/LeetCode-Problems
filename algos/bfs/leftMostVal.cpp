/**513. Find Bottom Left Tree Value
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
public:/*
        Runtime: 56 ms, faster than 65.22% of C++ online submissions for Find Bottom Left Tree Value.
        Memory Usage: 26.8 MB, less than 5.00% of C++ online submissions for Find Bottom Left Tree Value.
        */
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> que;
        
        auto hasChild = [&](TreeNode* node) {
            return root->left || root->right;
        };
        
        que.push(root);
        vector<int> levels;
        
        while(!que.empty()){
            vector<int> level;
            queue<TreeNode*> tmp;
            
            while(!que.empty()){
                TreeNode* top = que.front();
                que.pop();
                if(top != nullptr){
                    level.push_back(top->val);
                    tmp.push(top->left);
                    tmp.push(top->right);
                }
            }   
            que = tmp;
            if(!level.empty())
                levels = level;
        
        }
    
        
            cout << "[ ";
            for(auto num: levels){
                cout << num << ", ";
            }
            cout << ']' << endl;
        
        return levels[0];
    }
};