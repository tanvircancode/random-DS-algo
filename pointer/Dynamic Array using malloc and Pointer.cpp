#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3] = {1,5,8};

    int* arr2 = (int*) malloc(sizeof(arr));
    *arr2 = 1;
    *(arr2+1) = 5; //same as arr2[1] = 5
    // arr2[2] = 8;  // same as *(arr2+2) = 8
    cin>>arr2[2];

    cout<<*arr2<<endl;
    cout<<*(arr2+1)<<endl;
    cout<<arr2[2]<<endl;
    return 0;
}

