#include <iostream>
using namespace std;
#include "product.h"


product ::product(int long n, string namee)
{
    setname(namee); setcode(n);cout << "base class constructor"<< endl;
}
 product :: ~product ( ){cout <<"base class destructor";}
void product ::setcode(int long code )
{
    this->code=(code>0)?code:0;
}
void product :: setname(string n){ name=n;}
string product :: getname (){ return name;}
int long product ::getcode()
{
    return code;
} 
void product ::printer()
{
    cout << "name:"<< name<<endl;
    cout <<"barcode:"<< code<<endl;
}
void product ::scanner()
{
    cout << " enter the bar code "; cin >> code;
}
// float product :: getprice ()
// { return price;}