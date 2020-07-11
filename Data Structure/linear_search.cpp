#include<bits/stdc++.h>
using namespace std;
int arr[20],item,n,i;
bool b=false;

void arr_search(int item)
{
    for(i=0; i<n; i++)
    {
        if(arr[i] == item)
        {
            cout<<"The number is found in array's position : "<<i+1<<endl;
            b = true;
            break;
        }
    }

    if(i  == n)
    {
        cout<<"The number is not in the array"<<endl;
    }
     /*
    you can check using these too
    if(b == false)
    {
        cout<<"The number is not in the array"<<endl;
    }*/

}


int main()
{
    cout<<"Total number : ";
    cin>>n;
    cout<<"Array : ";
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    cout<<endl;

    cout<<endl;
    cout<<"Search : ";
    cin>>item;
    arr_search(item);

}
