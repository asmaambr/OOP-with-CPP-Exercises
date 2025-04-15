#include <iostream>
using namespace std;
#include "product.h"
#include "prepacked.h"
prepackedfood :: prepackedfood(int long b, string n, float p): product(b,n),price(p)
{

}

void prepackedfood ::printer ()
{
    product :: printer();
    cout << "price:" << price<< endl;
    
}

void prepackedfood :: scanner ()
{

    product:: scanner ();  
    cout << "enter the price"; cin >> price;
}

float prepackedfood :: getprice ()
{
    return price;
}
void prepackedfood :: setprice (float p)
{
    price=p;
}
