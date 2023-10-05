#include <iostream>
using namespace std;


class Point{

  private:
    int x;
    int y;
  
  public:
    void print() const{
      cout << "Location (x,y) = "<<"("<<x<<","<<y<<")"<<endl;
    }
  
    void  setX( int a ) 
    {
      x=a;
    }

    void  setY( int b ) 
    {
      y=b;
    }
  
  

    int getX() const {return x;}
    int getY() const {return y;}
  

  
};