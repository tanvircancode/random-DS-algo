#include<bits/stdc++.h>
using namespace std;
int main()
{
    //null pointer
   /* char ch = 'a';
    char* c = NULL;
    c = &ch;
    cout<<&ch<<endl;
    cout<<c<<endl;*/

    //assign one pointer to another
   /* int x = 10;
    int* px1 = &x;
    int* px2 = px1;
    *px2 = 20;
    cout<<*px1<<" "<<x<<endl;*/

    //free malloc
    int* px = (int*) malloc(sizeof(int));
    free(px);
    px = NULL;
    return 0;
}
