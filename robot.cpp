#include "robot.h"
using namespace std;

int x = 0;
int y = 0;


void Robot::init() {
  location.setX(x);
  location.setY(y);
  orientation = EAST;

}


void Robot::print() const {
  cout << "I am at (" << location.getX() << "," << location.getY() << ") and I am facing "; 

  switch (orientation)
    {     
    case NORTH: cout << "north"; break;
    case SOUTH: cout << "south"; break;
    case EAST: cout << "east"; break;
    case WEST: cout << "west"; break;
    }

  cout<<endl;

  
}


void Robot::setOrientation(orientation_type new_orientation) {
  orientation = new_orientation;
}


// all possible ways and the limitations
bool Robot:: forward() {
  
  switch (orientation) 
  {
    
    case NORTH:
         
        
    case SOUTH:
      if(!southEnd()|| x==9)
      {
        y++;
        turnCW();
        return true;
          
      }
      else if (!southEnd()|| x==0)
      {
        y++;
        turnAntiCW();
        return true;
      }
      else if(southEnd()|| x==9)
      {
        turnCW();
        break;
          
      }
      else if (!southEnd()|| x==0)
      {
        break;
      }

          
      break;
    
    case EAST:  
      if (!eastEnd()) 
      {
        x++;
        return true;
      }
      else
        zag();
      break;
    
    case WEST:
      if (!westEnd()) 
      {
        x--;
        return true;
      }
      else
        zig();
      break;
    
  }
    
  return false;
}


//Turning clockwise or anti-clockwise
// turning means that switcing your location to next one eg. north --> east
void Robot:: turnCW() { // east to west
  orientation_type new_orientation = static_cast<orientation_type> (orientation+1);
  setOrientation(new_orientation);

}

void Robot:: turnAntiCW() { // west to east
  orientation_type new_orientation = static_cast<orientation_type> (orientation-1);
  setOrientation(new_orientation);
  
}

//end of the bounce

bool Robot:: eastEnd() {
  return x == 9;
}

bool Robot:: westEnd() {
  return x == 0;
}

bool Robot::northEnd() {
  return y == 0;
}

bool Robot::southEnd() {
  return y == 9;
}


bool Robot:: zag() {
  
  if (eastEnd()) {
    turnCW();

      return true;

  }

  return false;
}

bool Robot:: zig() {
  if (westEnd()) {
    turnAntiCW();

    
    
      return true;
  }
  return false;
}

