#include<bits/stdc++.h>
using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int color[100],st[100],ft[100];
int nodes,edges,a,b,Time=1;


void dfs(int node)
{
    color[node] = GRAY;
    st[node] = Time;
    Time++;
    for(int i=0; i<nodes; i++)
    {
        if(adj[node][i] == 1 && color[i]== WHITE)
        {
            dfs(i);
        }
    }

    color[node] = BLACK;
    ft[node] = Time;
    Time++;
}
int main()
{
    freopen("input.txt","r",stdin);

    cin>>nodes;
    cin>>edges;
    for(int i=0; i<edges; i++)
    {
        cin>>a>>b;
        adj[a][b] = 1;
        //adj[b][a] = 1;
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

    for(int i=0; i<nodes; i++)
    {
        cout<<"Node : "<<(char)('A'+i)<<" Discovery Time : "<<st[i]<<" Finishing Time : "<<ft[i]<<endl;
    }

    return 0;
}
