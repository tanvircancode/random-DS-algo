#include<bits/stdc++.h>
using namespace std;
int n;

void print_series(int n)
{
    if(n == 0)
        return;

    print_series(n-1);


    cout<<n<<" ";
}
int main()
{
    cin>>n;
    print_series(n);
    cout<<endl;


}
