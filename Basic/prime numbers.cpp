#include<bits/stdc++.h>
using namespace std;
int n;
void check_prime(int n)
{
    int x=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            x=0;
            break;
        }
    }
    if(x==0)
    {
        cout<<n<<" is not a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is a prime number"<<endl;
    }
}

int main()
{
    while(1)
    {
        cin>>n;
        check_prime(n);
    }
}

