#include<bits/stdc++.h>
using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int color[100],parent[100],dist[100];
int nodes,edges,a,b,x;
queue<int>q;

void bfs(int starting_node)
{
    parent[starting_node] = -1;
    dist[starting_node] = 0;

    q.push(starting_node);
    while(!q.empty())
    {
        x = q.front();
        q.pop();
        color[x] = GRAY;

        for(int i=0; i<nodes; i++)
        {
            if(adj[x][i] == 1 && color[i] == WHITE)
            {
                dist[i] = dist[x] + 1;
                parent[i] = x;
                q.push(i);
            }
        }
        color[x] = BLACK;
        cout<<x<<" ";
    }
    cout<<endl;
}


int main()
{
    freopen("bfs_input.txt","r",stdin);
    cin>>nodes;
    cin>>edges;
    for(int i=0; i<edges; i++)
    {
        cin>>a>>b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    for(int i=0; i<nodes; i++)
    {
        color[i] = WHITE;
        dist[i] = INT_MAX;
        parent[i] = -1;
    }

    bfs(0);

    for(int i=0; i<nodes; i++)
    {
        cout<<"Node : "<<(char)('A'+i)<<" Parent : "<<parent[i]<<" Distance : "<<dist[i]<<endl;
    }
    cout<<endl;
}

/*
8 7
0 1
0 2
1 3
2 4
2 5
3 6
3 7
*/
