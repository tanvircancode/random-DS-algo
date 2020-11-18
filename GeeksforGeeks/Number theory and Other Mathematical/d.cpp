#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n<=1)
        return 1;
    int res;
    res = n * fact(n-1);
    return res;
}

int main()
{
    int n;cin>>n;
   int x = fact(n);
    cout<<x<<endl;
}
