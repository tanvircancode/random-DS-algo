#include<bits/stdc++.h>
using namespace std;

void show_stack(stack<int>s)
{
    while(!s.empty())
    {
        cout<<"stack: "<<s.top()<<endl;
        s.pop();
    }
}

int main()
{
    stack<int>s;
    s.push(5);
    s.push(10);
    s.push(18);
    s.push(20);
    s.push(24);
    show_stack(s);

    cout<<"size: "<<s.size()<<endl;
    cout<<"top: "<<s.top()<<endl;



}
