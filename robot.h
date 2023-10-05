#include <iostream>
using namespace std;
#include "point.h"

class Robot {

  
private:

    Point location;

    enum orientation_type{
      NORTH, EAST, SOUTH, WEST

    };

    orientation_type orientation;

public:

    void init();
    void print() const; 
    void setOrientation(orientation_type orientation);

    bool forward();

    void turnCW();
    void turnAntiCW();

    bool eastEnd();
    bool westEnd();
    bool northEnd();
    bool southEnd();

    bool zag();
    bool zig(); 
};
