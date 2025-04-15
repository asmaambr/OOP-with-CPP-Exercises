#ifndef BITVECTOR_H
#define BITVECTOR_H
using namespace std;
#include<iostream>

#include "vector.h"

class bitvector : public Vectorr
{
    
public:
bitvector ( int n);
bitvector sumvect ( bitvector v) ;
bitvector prodvect ( bitvector v) ;



};

#endif