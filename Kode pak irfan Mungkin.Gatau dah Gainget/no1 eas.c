#include <iostream>
#include <cmath>

using namespace std;

class Piece {
protected:
 int faction; //faction is 1 for white and -1 for black
 int x; int y; 
 char * name;
public:
 void getLocation(){
  cout << name << " is at x: " << x << " y: " << y << endl;
 }
 bool moveCondition (int x_dest, int y_dest);
 void move(int x_dest, int y_dest;
};
class Pawn : public Piece {
public:
 Pawn (int f) { //constructor is not inherited
  name = "Pawn";
  faction = f;
  x = 0;
  y = 0;
 }
 bool moveCondition(int x_dest, int y_dest) {
  return ((x_dest == x) && ((y_dest - y)==(1 * faction)));
 } 
P a g e | 1 
 
2019/2020(1) – IF184101 BASPRO (IUP) | MM Irfan Subakti
 
 void move(int x_dest, int y_dest) {
  if (moveCondition (x_dest, y_dest)) {
   x = x_dest;
   y = y_dest;
   getLocation();
  } else {
   cout << "invalid move" << endl;
  }
 }
};

