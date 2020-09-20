#include<bits/stdc++.h>
using namespace std;

struct myStruct
{
    int age;
    double height;
};

int main()
{
    struct myStruct s1;
    s1.age = 10;
    s1.height = 4.7;
    struct myStruct* ps1;
    ps1 = &s1;
    //(*ps1).age = 20;
    ps1 -> age = 20;
    //(*ps1).height = 5.8;
    ps1 -> height = 5.8;
    cout<<s1.age<<" "<<s1.height<<endl;
}
