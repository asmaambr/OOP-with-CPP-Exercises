#ifndef EXO1_H
#define EXO1_H
using namespace std;
#include <iostream>
class product 
{
    private:
    int long code;
    string name;
    public:
    product (int long =0,string =" product");
    void setcode (int long);
    void setname (string );
    string getname ();
    int long getcode ();
    void printer();
    void scanner ();
};

#endif