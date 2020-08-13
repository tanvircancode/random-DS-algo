#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 6, x=2; //assigning num value to x
    int *p;
    p=&num;
    *p = x;
    cout<<num<<endl;

    //*p=100; //assigning different value
    //cout<<num<<endl;
}
