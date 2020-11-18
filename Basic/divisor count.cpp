#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int cnt=0;
        for(long long i=1 ; i*i <= n; i++)
        {
            if(i*i == n)
            {
                cout<<i<<endl;
                cnt++;
            }
            else if(n%i == 0)
            {
                cout<<n/i<<endl;
                cout<<i<<endl;
                cnt+=2;
            }

        }
        cout<<cnt<<endl;
    }

}
