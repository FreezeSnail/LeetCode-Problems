/*559. Maximum Depth of N-ary Tree
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    /*
    Runtime: 36 ms, faster than 64.52% of C++ online submissions for Maximum Depth of N-ary Tree.
    Memory Usage: 12 MB, less than 5.04% of C++ online submissions for Maximum Depth of N-ary Tree.
    */
    
    int bfs( vector<Node*> que){
        if(que.empty())
            return 0;
        vector<Node*> queue;
        for(Node* node : que){
            for(Node* child : node->children)
            queue.push_back(child);
        }
        que.clear();
        return 1 + bfs(queue);
        
    }
    
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        vector<Node*> que;
        
        que.push_back(root);
            
        return bfs(que);
        
    }
};