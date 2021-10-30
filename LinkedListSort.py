import collections

class ListNode:
   def __init__(self, data, next = None):
      self.val = data
      self.next = next

def make_list(elements):
   head = ListNode(elements[0])
   for element in elements[1:]:
      ptr = head
      while ptr.next:
         ptr = ptr.next
      ptr.next = ListNode(element)

   return head

def print_list(head):
   ptr = head
   print('[', end = "")
   while ptr:
      print(ptr.val, end = ", ")
      ptr = ptr.next
   print(']')

class Solution:
   def solve(self, node):

   values = []
   head = node
   while node:
      values.append(node.val)
      node = node.next

   values.sort()
   values = collections.deque(values)

   node = head
   while node:
      node.val = values.popleft()
      node = node.next

   return head

ob = Solution()
head = make_list([5, 8, 4, 1, 5, 6, 3])
print_list(ob.solve(head))