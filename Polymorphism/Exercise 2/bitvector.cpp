#include <iostream>
using namespace std;

#include"vector.h"
#include"bitvector.h"

bitvector :: bitvector ( int n) : Vectorr(n)
{}

bitvector bitvector:: sumvect ( bitvector v) 
{
    if (getsize ()!= v.getsize())
        cout << " vectors must be of same size" << endl;
    else
    {
        bitvector result(getsize());
        for (int i = 0; i < getsize(); i++)
        {
            result.setvalue(i,v.getvalue(i)||getvalue(i));
            
        }
        return result;
    }
}
bitvector bitvector:: prodvect (bitvector v) 
{
    if ( getsize()!= v.getsize())
        cout << " vectors must be of same size" << endl;
    else
    {
        bitvector result(getsize());
        for (int i = 0; i < getsize(); i++)
        {
            
                result.setvalue(i,getvalue(i) && v.getvalue(i));
            
        }
        return result;
    }
}

