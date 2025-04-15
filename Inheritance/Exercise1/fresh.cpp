#include <iostream>
using namespace std;
#include "product.h"
#include "fresh.h"


freshfood :: freshfood(int long code, string n, float p, float w)
    : product (code,n),weight(w),price(p)
{}

void freshfood :: setprice (float p)
{
    price=p;
}
void freshfood :: setweight (float w)
{
    weight=w;
}
float freshfood :: getprice ()
{
    return price;
}
float freshfood :: getweight ()
{
    return weight;
}

void freshfood :: printer (){
    product :: printer();
    cout << "weight:" << getweight()<< endl;
    cout << "price per kelograme:" << getprice()<< endl; 

}

void freshfood :: scanner (){

    product:: scanner ();  
    cout << "enter the price"; cin >> price;
    cout << "enter the weight"; cin >> weight;
}
