#include <iostream>
using namespace std;
#include "product.h"
#include "prepacked.h"
prepackedfood :: prepackedfood(int long b, string n, float p): product(b,n) 
{
    price=(p>0)? p:0;cout << "pepacked claa constructor"<< endl;
}
 prepackedfood :: ~ prepackedfood(){cout <<"prepacked class destructor";}

void prepackedfood ::printer ()
{
    product :: printer();
    cout << "price:" << getprice()<< endl;
    
}

void prepackedfood :: scanner ()
{

    product:: scanner ();  
    cout << "enter the price"; cin >> price;
}

// void prepackedfood :: setprice (float p)
// {
//     price=(p>0)? p:0;
// }

float prepackedfood :: getprice ()
{
   return price;
}

