#include <iostream>
using namespace std;
#include "product.h"
#include "fresh.h"


freshfood :: freshfood(int long code, string n, float p, float w):product (code,n)
{
    price=(p>0)? p:0;; setweight(w); cout << "fresh claa constructor"<< endl;
}
 freshfood :: ~freshfood(){cout <<"fresh class destructor";}

// void freshfood :: setprice (float p)
// {
//      price=(p>0)? p:0;
// }
void freshfood :: setweight (float w)
{
    weight=(w>0)? w:0;
}

float freshfood :: getprice ()
{
   return price*weight;
}
float freshfood :: getweight ()
{
    return weight;
}

void freshfood :: printer (){
    product :: printer();
    cout << "weight:" << getweight()<< endl;
    cout << "price per kelograme:" << price<< endl; 
    cout << "total price"<< getprice();

}

void freshfood :: scanner (){

    product:: scanner ();  
    cout << "enter the price"; cin >> price;
    cout << "enter the weight"; cin >> weight;
}
