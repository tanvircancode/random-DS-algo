#include<bits/stdc++.h>
using namespace std;
int i,j,data[100],swap,a,temp;

void sorted(int data[100])
{
    for(i=0; i<a; ++i)
    {
        for(j=i+1; j<a; ++j)
        {
             if(data[i]>data[j])
             {
                 temp=data[i];
                 data[i]=data[j];
                 data[j]=temp;
             }
        }
    }
}

int main()
{

    printf("The size of data:");
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&data[i]);
    }
    sorted(data);

    printf("Ascending order: ");
    for(i=0; i<a; ++i)
    {
        printf("%d ",data[i]);
    }
    return 0;
}


