class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        left = head
        right = head
        
        # Advance the right pointer n steps forward
        for _ in range(n):
            right = right.next
            
        # EDGE CASE: If right is None, n equals the length of the list.
        # This means we need to remove the head node.
        if not right:
            return head.next
            
        # Move both pointers until right reaches the last node
        while right.next:
            left = left.next
            right = right.next
            
        # Delete the nth node from the end
        left.next = left.next.next
        
        return head
