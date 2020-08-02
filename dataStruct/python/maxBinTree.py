# 654. Maximum Binary Tree
def constructMaximumBinaryTree(self, nums):
        """
        :type nums: List[int]
        :rtype: TreeNode
        36% faster
        17% less mem
        """
        if(nums == None):
            return None
        
        
        largest = max(nums)
        node = TreeNode(largest)
        split = nums.index(largest)

        if(len(nums[:split])):
            node.left = self.constructMaximumBinaryTree(nums[:split])
        if(len(nums[split+1:])):
            node.right = self.constructMaximumBinaryTree(nums[split+1:])
        return node