#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3] = {1,5,8};
    cout<<&arr[0]<<endl;
    cout<<arr<<endl;
    cout<<&arr[1]<<endl;
    cout<<arr+1<<endl;  // &arr[1] == arr+1
    cout<<*(arr+1)<<endl;
    cout<<arr[1]<<endl;// *(arr+1) == arr[1]
    return 0;
}
