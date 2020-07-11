#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
    int id;
    string name;
    float salary;

    void info(int i, string n, float s)
    {
        this->id = i;
        this->name = n;
        this->salary = s;
    }
    void display()
    {
            cout<<id<<endl;
            cout<<name<<endl;
            cout<<salary<<endl;
    }
};

int main()
{
    Student s1;
    s1.info(4,"rahi", 60565);
    s1.display();
    s1.info(5,"sakib",40594);
    s1.display();

    return 0;
}

