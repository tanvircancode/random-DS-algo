#include<bits/stdc++.h>
using namespace std;
#define go_fast   ios_base :: sync_with_stdio(false), cin.tie(0);
int main()
{
    go_fast
    int n;
    cin>>n;
    int x = n-1,cnt=1;
    for(int i=1;i<=n+x;i++)
    {
        if(i>n)
        {
            cout<<n-cnt<<" ";
            cnt++;
            continue;
        }
        cout<<i<<" ";
    }

}
//input : 6
//output : 1 2 3 4 5 6 5 4 3 2 1
