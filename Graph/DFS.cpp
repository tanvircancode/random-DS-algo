#include<bits/stdc++.h>
using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int color[100];
int nodes,edges,a,b;


void dfs(int node)
{
    color[node] = GRAY;
    for(int i=0; i<nodes; i++)
    {
        if(adj[node][i] == 1 && color[i]== WHITE)
        {
            dfs(i);
        }
    }
    color[node] = BLACK;
}
int main()
{
    freopen("input.txt","r",stdin);

    cin>>nodes>>edges;
    for(int i=0; i<edges; i++)
    {
        cin>>a>>b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    for(int i=0; i<nodes; i++)
    {
        color[i] = WHITE;
    }

    for(int i=0; i<nodes; i++)
    {
        if(color[i] == WHITE)
        {
            dfs(i);
        }
    }
    return 0;
}
