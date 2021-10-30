class TreeNode:
   def __init__(self, data, left = None, right = None):
      self.data = data
      self.left = left
      self.right = right
def insert(temp,data):
   que = []
   que.append(temp)
   while (len(que)):
      temp = que[0]
      que.pop(0)
      if (not temp.left):
         if data is not None:
            temp.left = TreeNode(data)
         else:
            temp.left = TreeNode(0)
         break
      else:
         que.append(temp.left)
      if (not temp.right):
         if data is not None:
            temp.right = TreeNode(data)
         else:
            temp.right = TreeNode(0)
         break
      else:
         que.append(temp.right)
def make_tree(elements):
   Tree = TreeNode(elements[0])
   for element in elements[1:]:
      insert(Tree, element)
   return Tree
class Solution(object):
   def zigzagLevelOrder(self, root):
      if not root:
         return []
      queue = [root]
      res = []
      res2=[]
      flag = True
      while len(queue)!=0:
         res.append([i for i in queue])
         res2.append([i.data for i in queue if i.data != 0])
         queue = []
         if flag:
            i=len(res[-1])-1
         while i>=0:
            if res[-1][i].right:
               queue.append(res[-1][i].right)
            if res[-1][i].left:
               queue.append(res[-1][i].left)
            i-=1
         else:
            i=len(res[-1])-1
            while i>=0:
               if res[-1][i].left:
                  queue.append(res[-1][i].left)
               if res[-1][i].right:
                  queue.append(res[-1][i].right)
               i-=1
            flag = not flag
         return res2
ob = Solution()
tree = make_tree([3,9,20,None,None,15,7])
print(ob.zigzagLevelOrder(tree))