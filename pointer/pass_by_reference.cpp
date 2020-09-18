#include<bits/stdc++.h>
using namespace std;

void change(int* px)
{
    *px = 20;
    cout<<*px<<endl;
    cout<<"----"<<endl;
}
int main()
{
    int x=10;
    change(&x);
    cout<<x<<endl;
}
