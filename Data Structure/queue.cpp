#include<bits/stdc++.h>
using namespace std;

void show_queue(queue<int>q)
{
    while(!q.empty())
    {
        cout<<"queue: "<<q.front()<<endl;
        q.pop();
    }
}

int main()
{
    queue<int>q;
    q.push(5);
    q.push(10);
    q.push(18);
    q.push(20);
    q.push(24);
    show_queue(q);

    cout<<"size: "<<q.size()<<endl;
    cout<<"top: "<<q.front()<<endl;
    cout<<"top: "<<q.back()<<endl;

}

