#ifndef PREPACKED_H
#define PREPACKED_H
using namespace std;
#include <iostream>
#include "product.h"

class prepackedfood : public product
{
    private:
    
    float price;
    public:

    prepackedfood (int long =0, string ="prepacked food", float =0);
    float getprice ();
    void setprice (float p);
    void printer ();
    void scanner ();

};

#endif