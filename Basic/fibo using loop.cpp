#include<bits/stdc++.h>
using namespace std;
int n;

int fibo(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;

    return fibo(n-2)+fibo(n-1);
}

int main()
{
    int x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       x= fibo(i);
    }
   cout<<x<<endl;
    return 0;
}



