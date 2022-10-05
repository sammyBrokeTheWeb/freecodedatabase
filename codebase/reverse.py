def reverse_list(head):
    if not head or not head.next:
        return head
    prev = None
    while head:
        current = head
        head = head.next
        current.next = prev
        prev = current
    return prev

def reverse_list_recursive(head):
    if head is None or head.next is None:
        return head
    p = head.next
    head.next = None
    revrest = reverse_list_recursive(p)
    p.next = head
    return revrest
  
"""
Reverse a singly linked list.
Input:
1 -> 2 -> 3 -> 4

Output:
4 -> 3 -> 2 -> 1
"""
