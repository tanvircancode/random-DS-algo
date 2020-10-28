#include<bits/stdc++.h>
using namespace std;

int adj[100][100];
int nodes,edges,n1,n2;

int main()
{
    vector<int>vec[5];
    freopen("input.txt","r",stdin);

    cin>>nodes;
    cin>>edges;
    for(int i=0; i<edges; i++)
    {
        cin>>n1>>n2;
        vec[n1].push_back(n2);
        vec[n2].push_back(n1);
    }

    for(int i=0;i<vec[2].size();i++)
    {
        cout<<vec[2][i]<<" ";
    }
}
