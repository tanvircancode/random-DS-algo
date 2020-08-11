#include<bits/stdc++.h>
using namespace std;
// 2 5 10 6 4 5 3 2 9 6
// 50 60 10 30 50 40 10 60 70 30
// 4 3 10 9 5 4 9 10 2 3
// 10 20 10 1 100 20 2 1 5 10
int main()
{
    int array[20],x;
    for(int i=0; i< 10; i++)
    {
        cin>>array[i];
    }
    sort(array, array+10);

    for(int i=0; i< 10; i++)
    {
        x= array[i];
        for(int j=i+1; j<= 10; j++)
        {
            if(array[j] == x)
            {
                continue;
            }
            else
            {
                 cout<<x<<" ";
                 i = j-1;
                 break;
            }
        }

    }
return 0;

}

