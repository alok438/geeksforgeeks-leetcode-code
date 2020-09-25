def dfsutil(v, recs, visit, graph):
    if visit[v] is False:
        visit[v]=True
        recs[v]=True
        for i in graph[v]:
            if not visit[i] and dfsutil(i, recs, visit, graph):
                return True
            elif recs[i]:   // recs[i]==true
                return True
    recs[v]=False
    return False

def isCyclic(n, graph):
    # Code here
    visit = [False] * n
    recs = [False] * n
    for i in range(n):        //for(i=0;i<v;i++)
        if visit[i]==False:
            if dfsutil(i,recs,visit,graph) is True:
                return True
    return False 




https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1