#include<bits/stdc++.h>
using namespace std;
// 2 5 10 6 4 5 3 2 9 6
//  10 20 30 40 50
int main()
{
    int array[20],carray[20], pos,n;
    queue<int>q;
    cout<<"Enter size of the array : ";
    cin>>n;
    cout<<"Enter elements in array : ";
    for(int i=1; i<= n; i++)
    {
        cin>>array[i];
        carray[i]=array[i];
    }

    printf("Enter the element position to delete : ");
    cin>>pos;

    if(pos<0 || pos>n)
    {
        cout<<"Invalid Position, Enter value between 1 to "<<n;
    }
    else
    {
        for(int i=pos; i< n; i++)
        {
            carray[i] = array[i+1];
        }
    }

    for(int i=1; i< n; i++)
    {
        cout<<carray[i]<<" ";
    }
    cout<<endl;

    return 0;

}



