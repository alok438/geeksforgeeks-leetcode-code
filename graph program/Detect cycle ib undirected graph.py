def dfs(g,node,parent,vis):
    # mark current node as visited
    vis[node]=1

    # traverse for nodes connected with given node
    for nodes in g[node]:
        if not vis[nodes]: # if current node is not visited
            if dfs(g,nodes,node,vis):
                return 1
        else: # if the already visited node is not parent node.. cycle exists
            if nodes!=parent:
                return 1
    return 0

def isCyclic(g,n):
    '''
    :param g: given adjacency list representation of graph
    :param n: no of nodes in graph
    :return:  boolean (whether a cycle exits or not)
    '''
    vis = [0 for i in range(n)] # mark each edge as not visited

    # do dfs for the graph, with info of parent of current node also passed in
    for node in range(n):
        if vis[node]== 0:
            if dfs(g,node,-1,vis): # -1 as root has no parent
                return 1
    return 0 
    
    
    
    
    
    https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1