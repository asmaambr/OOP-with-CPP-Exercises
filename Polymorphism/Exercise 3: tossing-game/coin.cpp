using namespace std;
#include <iostream>
#include "coin.h"
#include <ctime>

coin:: ~ coin()
{
  cout << "base class destructor"<< endl;  
}
bool coin:: toss () const {
   
    return rand()%2;
}
