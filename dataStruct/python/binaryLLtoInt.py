# 1290. Convert Binary Number in a Linked List to Integer
def getDecimalValue(self, head):
        """
        :type head: ListNode
        :rtype: int
        #89% faster
        66% less mem
        """
        binary = ""
        while head != None:
            binary = binary + str(head.val)
            head = head.next
        return int(binary, 2)