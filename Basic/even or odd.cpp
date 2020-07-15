#include<bits/stdc++.h>
using namespace std;
int n;
void check(int n)
{
   /* if(n%2==0)
    {
        cout<<n<<" is even"<<endl;
    }
    else
    {
        cout<<n<<" is odd"<<endl;
    }*/
    //using bitwise AND
    if(n & 1)
    {
        cout<<n<<" is odd"<<endl;
    }
    else
    {
        cout<<n<<" is even"<<endl;
    }
}

int main()
{
    while(1)
    {
        cin>>n;
        check(n);
    }
}
