#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    int a=2, b= 2;
    int mul()
    {
        int c = a*b;
        return c;
    }
};



class B:public A
{
public:
    void res()
    {
        int x = mul();
        cout<<"Multiplication is : "<<x<<endl;
    }
};

int main()
{
    B b;
    b.res();

}


