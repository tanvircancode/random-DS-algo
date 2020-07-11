#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
  int height, width;

  void rectangle(int w, int h)
  {
       this->height = h;
       this->width = w;
  }

  void area()
  {
      cout<<"Area of rectangle: "<<height*width<<endl;
  }
};

int main()
{
    Rectangle rec;
    rec.rectangle(5,4);
    rec.area();

}
