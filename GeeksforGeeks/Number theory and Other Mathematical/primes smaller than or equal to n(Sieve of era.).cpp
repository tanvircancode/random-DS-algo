#include<bits/stdc++.h>
using namespace std;
#define go_fast   ios_base :: sync_with_stdio(false), cin.tie(0);

void SieveofEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof prime);
    for(int i=2; i*i<=n ; i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=n; j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(prime[i])
            cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    go_fast
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        SieveofEratosthenes(n);
    }
    return 0;
}
