#include <iostream>
using namespace std;
#include "vector.h"

Vectorr ::Vectorr(int n): n(n)
{
    integers = new int[n];
    
}
Vectorr :: ~Vectorr() 
{
    delete []integers;
}
Vectorr Vectorr ::sumvect(const Vectorr &v)
{

    if (n != v.n)
        cout << " vectors must be of same size" << endl; 
        
    else
    {
        Vectorr result(n);
        for (int i = 0; i < n; i++)
        {
            result.integers[i] = v.integers[i] + integers[i];
        }
        return result;
    }
}


int Vectorr ::getsize()
{
    return n;
}

int Vectorr :: getvalue (int i)
{
    return integers[i];
}
void Vectorr :: setvalue(int i, int value)
{
    integers[i]=value;
}
void Vectorr ::print ()
{
    for (int i=0 ; i<n;i++)
    {
        cout << integers[i]<< endl;
    }
}

void Vectorr ::setall (int value)
{
    for (int i=0; i<n; i++)
   {
    integers[i]=value;
   }
}


int Vectorr ::prodvect(const Vectorr &v)
{
    if (n != v.n)
        cout << " vectors must be of same size" << endl;
    else
    {
        int result;
        for (int i = 0; i < n; i++)
        {
                result += integers[i] * v.integers[i];
            
        }
        return result;
    }
   
}