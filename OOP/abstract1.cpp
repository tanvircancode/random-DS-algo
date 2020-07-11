#include<bits/stdc++.h>
using namespace std;

class Shape{
   public:
       virtual void draw()=0;
};

class Rectangle: public Shape{
   public:
       void draw()
       {
           cout<<"Draw a rectangle"<<endl;
       }

};

class Triangle: public Shape{
   public:
       void draw()
       {
           cout<<"Draw a triangle"<<endl;
       }

};
int main()
{
    Rectangle r;
    Triangle t;
    r.draw();
    t.draw();
}

