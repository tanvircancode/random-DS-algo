#include<bits/stdc++.h>
using namespace std;

struct myStruct
{
    int age;
    double height;
};

int main()
{
    struct myStruct* ps;
    ps = (struct myStruct*) malloc(sizeof(struct myStruct));
    ps -> age = 30;
    ps -> height = 5.9;
    cout<<ps->age<<" "<<ps->height<<endl;
}

