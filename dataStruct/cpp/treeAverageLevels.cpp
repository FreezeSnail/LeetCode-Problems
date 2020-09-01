/**637. Average of Levels in Binary Tree
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
    /*Runtime: 40 ms, faster than 19.66% of C++ online submissions for Average of Levels in Binary Tree.
     Memory Usage: 22.9 MB, less than 20.87% of C++ online submissions for Average of Levels in Binary Tree.
    */
    int bfs(int depth, TreeNode* root, vector<pair<int, int>> & nodes){
        if(root != nullptr){
            nodes.push_back({depth, root->val});
            return 1 + max(bfs(depth+1, root->left, nodes), bfs(depth+1, root->right, nodes));
        }
        return 0;
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        vector<pair<int, int>>  nodes;
        int height = bfs(0, root, nodes);
        cout << height << endl;
        vector<double> avgs;
        int depth = 0, count = 0;
        double runningSum = 0;
        for(; depth < height; ++depth){
            for(auto pair: (nodes)){
                //cout << "pair " << pair.first << "," << pair.second << endl;
                if(pair.first == depth){
                    count++;
                    runningSum += pair.second;
                }
            }
            //cout << runningSum << "," << count << endl;
                    avgs.push_back(runningSum / (double)count);
                    count = 0;
                    runningSum = 0;
        }
        
            
        
        return avgs;
    }
};