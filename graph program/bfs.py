def bfs(self,s):
    visited = [False] * s 
    queue = [] 
    queue.append(0) 
    visited[0] = True
  
    while queue:
        s = queue.pop(0) 
        print (s, end = " ") 
        for i in self[s]:
            if visited[i] == False: 
                queue.append(i) 
                visited[i] = True
                
                
                
                
https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1