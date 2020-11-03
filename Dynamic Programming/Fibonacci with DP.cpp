#include<bits/stdc++.h>
using namespace std;
#define fast ios_base :: sync_with_stdio(false);
#define sz
int memo[50];
int fibo(int n)
{
    if(n<=1)
        return n;

    if(memo[n] != -1)
        return memo[n];

    memo[n] = fibo(n-1) + fibo(n-2);
    return memo[n];
}

int main()
{
    int n;
    cin>>n;
    // int memo[n+1];
    memset(memo,-1,sizeof(memo));
    int res = fibo(n);
    cout<<res<<endl;
}

