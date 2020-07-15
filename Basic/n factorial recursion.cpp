#include<bits/stdc++.h>
using namespace std;
int n;

int fact(int n)
{
    if(n<=1)
        return 1;

    else
        return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    int res = fact(n);
    cout<<"factorial of "<<n<<" is: "<<res<<endl;
    return 0;
}
