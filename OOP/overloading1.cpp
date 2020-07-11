#include<bits/stdc++.h>
using namespace std;

class Cal{
   public:
       int add(int a, int b)
       {
           return a+b;
       }
       float add(int a, double b)
       {
           return a+b;
       }


};
int main()
{
    Cal c;
    int r1 = c.add(2,10);
     float r2 = c.add(3,2.5);
     cout<<r1<<endl;
     cout<<r2<<endl;
}
