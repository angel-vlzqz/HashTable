#include "Hash.hpp"

int main() {
  insert(10);    //just adding some data
  insert(10);
  insert(125);
  insert(0);
  insert(725);
  insert(85);
  insert(11);
  display();                   //displaying the data
 cout << find(125);      //looking for 125
} 