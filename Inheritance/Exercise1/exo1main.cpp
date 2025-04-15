#include <iostream>
using namespace std;
#include "product.cpp"
#include "fresh.cpp"
#include "prepacked.cpp"


int main ()
{
    product p1(10000,"p1");
    product p2;
    cout << p1.getname()<< endl;
    cout << p1.getcode() << endl;
    p2.printer();
    p2.setcode(2000);
    p2.printer();

    prepackedfood pf1(3333,"pf1", 2500);
    prepackedfood pf2;
    pf1.printer();

    pf2.scanner();
    pf2.setname("pf2");
    pf2.printer();

    freshfood ff1(3847238,"ff1",3000,3);
    freshfood ff2;
    ff1.printer();
    ff2.printer();



    
    
}