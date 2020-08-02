# 1008. Construct Binary Search Tree from Preorder Traversal
def bstFromPreorder(self, preorder):
        """
        :type preorder: List[int]
        :rtype: TreeNode
        60% faster
        31% less mem
        """
        def bstPreOrd(arr, start, end):
            
            if start > end:
                return None
            
            node = TreeNode(arr[start])
            i = start
            while i <= end:
                if(arr[i] > node.val):
                    break
                i +=1
            
            
            node.left  = bstPreOrd(arr, start + 1, i - 1)
            
            node.right = bstPreOrd(arr, i, end)
            
            return node
        
        return bstPreOrd(preorder, 0, len(preorder)-1)

 def bstFromPreorder(self, preorder):
        """
        :type preorder: List[int]
        :rtype: TreeNode
        using slicing
        79% faster
        15% less mem
        """
        if len(preorder) == 0:
            return None
        
        node = TreeNode(preorder[0])
        i = 0
        while i < len(preorder):
            if(preorder[i] > node.val):
                break
            i +=1


        node.left  = self.bstFromPreorder(preorder[1:i])

        node.right = self.bstFromPreorder(preorder[i:])

        return node