#include<bits/stdc++.h>
using namespace std;
//Dangling Pointer
int* change(int* px)
{
    //int* px;
    cout<<px<<endl;
    return px;
   // cout<<"----"<<endl;
}
int main()
{
    int x=10;
    int* res = change(&x);
    cout<<&x<<endl;
    cout<<*res<<endl;
}

