#include<bits/stdc++.h>
using namespace std;
int n;

int total(int n)
{
    if(n<=1)
        return 1;

    return n+total(n-1);
}

int main()
{
    int res;
    cin>>n;
    res = total(n);
    cout<<res<<endl;
}
