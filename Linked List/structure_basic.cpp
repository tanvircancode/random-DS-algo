#include<bits/stdc++.h>
using namespace std;

struct myStruct
{
    //char name[50];
    string name;
    int age;
    double height;
};

int main()
{
    struct myStruct s1;
    struct myStruct s2;
    s1.age = 20;
    s2.age = 30;
    // strcpy(s1.name, "Tanvir");
    //strcpy(s2.name, "Tanjir");
    s1.name = "Tanvir";
    s2.name = "Tanjir";
    cout<<s1.age<<" "<<s1.name<<endl;
    cout<<s2.age<<" "<<s2.name<<endl;


}
