#include<bits/stdc++.h>
using namespace std;

class Account{
  public:
  float salary = 60000;
  void eat()
  {
      cout<<"Dog is eating"<<endl;
  }
};



class Programmer:public Account{
  public:
  float bonus = 5000;
  void bark()
  {
      cout<<"Dog is barking"<<endl;
  }

};

int main()
{
   Programmer p1;
   cout<<p1.salary<<endl;
   cout<<p1.bonus<<endl;
   p1.eat();
    p1.bark();
}

