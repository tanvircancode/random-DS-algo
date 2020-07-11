#include<bits/stdc++.h>
using namespace std;

class Sum
{
private:
    int x, y, z;
public:
    void sum()
    {
        cout<<"Enter first number: ";
        cin>>x;
        cout<<endl<<"Enter second number: ";
        cin>>y;

        z=x+y;
        cout<<"Z : "<<z<<endl;
    }

};
int main()
{
    Sum s;
    s.sum();
}


