/**173. Binary Search Tree Iterator

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
class BSTIterator {
private:
    /* stack based with post order transversal
    Runtime: 100 ms, faster than 45.31% of C++ online submissions for Binary Search Tree Iterator.
    Memory Usage: 28.1 MB, less than 17.30% of C++ online submissions for Binary Search Tree Iterator.
    
    */
    void postorder(TreeNode * root, stack<int> & queue){
        if(root){
            postorder(root->right, queue);
            queue.push(root->val);
            postorder(root->left, queue);
        }
    }
public:
    stack<int> queue;
    
    BSTIterator(TreeNode* root) {
        postorder(root, this->queue);
    }
    
    /** @return the next smallest number */
    int next() {
        int num = queue.top();
        queue.pop();
        return num;
        
        
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !queue.empty();
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */