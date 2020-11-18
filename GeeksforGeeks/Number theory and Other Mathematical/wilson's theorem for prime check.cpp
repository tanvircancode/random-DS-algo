#include<bits/stdc++.h>
using namespace std;
#define go_fast   ios_base :: sync_with_stdio(false), cin.tie(0);
//It works till 20
long long int fact(long long int n)
{
    if(n<=1)
        return 1;
    long long int res;
    return n * fact(n-1)*1LL;
    //return res;
}
void check(int n)
{
    long long int x = fact(n-1);
    if(x%n == (n-1))
        cout<<"It is a prime number"<<endl;
    else
        cout<<"It's not a prime number"<<endl;
}

int main()
{
    go_fast
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        check(n);
    }
    return 0;
}

