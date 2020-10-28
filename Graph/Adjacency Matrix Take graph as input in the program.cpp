#include<bits/stdc++.h>
using namespace std;

int adj[100][100];

int main()
{
    int n,e,i,j,a,b;
    cout<<"Number of nodes : ";
    cin>>n;
    cout<<"Number of edges : ";
    cin>>e;
    cout<<"edges:";
    for(j=0; j<e; j++)
    {
        cin>>a>>b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
