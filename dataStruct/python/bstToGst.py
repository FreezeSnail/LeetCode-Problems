# 1038. Binary Search Tree to Greater Sum Tree
def bstToGst(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        47% faster
        7% less mem
        """
        def postOrd(root, sum):
            if(root != None):
                root.val = root.val + postOrd(root.right, sum)
                return postOrd(root.left, root.val)
            return sum
            
        postOrd(root, 0)
        
        return root