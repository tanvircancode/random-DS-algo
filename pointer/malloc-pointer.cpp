#include<bits/stdc++.h>
using namespace std;

int* change()
{
    int* px;
    px = (int*) malloc(sizeof(int));
    *px = 10;
    return px;
}
int main()
{
 /*   int* px;
    px = (int*) malloc(4);

    char* cx;
    cx = (char*) malloc(1);

    int x = sizeof(char);
    cout<<x<<endl;*/
    int* res = change();
    cout<<res<<endl;
    return 0;
}
