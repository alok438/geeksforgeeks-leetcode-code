def dfs(g,N):
    visited = [False] * N
    dfsUtils(g, 0, visited)
    
def dfsUtils(g, root, vis):
    print(root, end = ' ')
    
    vis[root] = True
    
    for node in g[root]:
        if not vis[node]:
            dfsUtils(g, node, vis)

https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1


def dfs(g,N):
    visited = [False] * N
    res=[]
    dfsUtils(g, 0, visited,res)
    return res
    
def dfsUtils(g, root, vis,res):
    res.append(root)
    
    vis[root] = True
    
    for node in g[root]:
        if not vis[node]:
            dfsUtils(g, node, vis,res)
    return
