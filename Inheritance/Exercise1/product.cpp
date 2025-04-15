#include <iostream>
using namespace std;
#include "product.h"


product ::product(int long n, string namee)
{
    setname(namee); setcode(n);
}
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