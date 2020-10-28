#include<bits/stdc++.h>
using namespace std;

int adj[100][100];

int main()
{
    int n,e,i,j,a,b;
    freopen("input.txt","r",stdin);
    cin>>n;
    cin>>e;

    for(j=0; j<e; j++)
    {
        cin>>a>>b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    for(i=0; i<n; i++)
    {
        if(adj[4][i] == 1)
            cout<<i<<" ";
    }
    return 0;
}
