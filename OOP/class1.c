#include<iostream>
#include<stdio.h>

class Student{
  public:
    int id;
    string name;
};

int main()
{
    Student s1;
    s1.id = 4;
    s1.name = "tanvir chy";
    cout<<s1.id<<endl;
    cout<<s1.name<<endl;
    return 0;
}

