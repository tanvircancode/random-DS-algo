#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
    int id;
    string name;

    void info(int i, string n)
    {
        id = i;
        name = n;
    }
    void display()
    {
            cout<<id<<endl;
            cout<<name<<endl;
    }
};

int main()
{
    Student s1;
    s1.info(4,"rahi");
    s1.display();
    s1.info(5,"sakib");
    s1.display();

    return 0;
}

