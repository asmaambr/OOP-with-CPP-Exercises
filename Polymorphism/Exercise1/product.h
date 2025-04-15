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
    
    virtual ~product ();
    product (int long =0,string =" product");
    void setcode (int long);
    void setname (string );
    string getname ();
    int long getcode ();
    virtual void printer(); // virtual function allows u to access derived classes functions using  a pointer of the base class by assigning the address of the derived class object to it 
    virtual void scanner ();
    //virtual float getprice()=0; // a pure virtual function forces the other derived classes to have their own implementation of their funtions 
    // it is false to declare the function getprice in the base classs
    //virtual void setprice( float)=0;/
    // but the base class shouldn't hAVE TO HAVE a getprice method , 
    //should i add a price data member to product class ? or downcast the base class pointer pointing to the derived classes objects?  
};

#endif