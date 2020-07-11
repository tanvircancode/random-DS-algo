#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
    int id;
    string name;
    static float salary;
    static int count;

    void info(int i, string n)
    {
        this->id = i;
        this->name = n;
        count++;
    }
    void display()
    {
            cout<<id<<endl;
            cout<<name<<endl;
            cout<<salary<<endl;
    }

};

float Student::salary=9000;
int Student::count=0;

int main()
{
    Student s1;
    s1.info(4,"rahi");
    s1.display();
    s1.info(5,"sakib");
    s1.display();
    cout<<"Total count :"<<Student::count<<endl;

    return 0;
}

