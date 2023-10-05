#include <iostream>
using namespace std;

class World{

  private:
    int point[3][2];

  public:

    void print(int i) const {
      cout<< "(" << point[i][0] << ","<<point[i][1] << ")"; 
   
    }

    void set(int i, int x, int y) {
      point[i][0] = x ;
      point[i][1] = y;
      
    }

  
};