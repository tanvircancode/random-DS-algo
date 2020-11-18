#include<bits/stdc++.h>
using namespace std;
int n;

long long int fact(long long int n)
{
    if(n<=1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    long long int n;
    cin>>n;
    long long int res = fact(n);
    cout<<"factorial of "<<n<<" is: "<<res<<endl;
    return 0;
}
