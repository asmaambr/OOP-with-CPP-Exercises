#include "poly.h"
#include <iostream>
using namespace std;

Polynomial :: Polynomial ()
{
    exponents[100]={0};
    coefficients[100]={0};
}
Polynomial Polynomial :: operator+ (const Polynomial & p)
{
    for (int i=0; i<100; i++)
    {
        if (exponents[i]==p.exponents[i]) coefficients[i]=coefficients[i]+p.coefficients[i];
        else coefficients[i]=coefficients[i];
    }
    Polynomial result=*this;
    return result;
}
Polynomial  Polynomial ::operator- (const Polynomial & p)
{
    for (int i=0; i<100; i++)
    {
        if (exponents[i]==p.exponents[i]) coefficients[i]=coefficients[i]-p.coefficients[i];
        else coefficients[i]=coefficients[i];
    }
    Polynomial result=*this;
    return result;
}
Polynomial Polynomial :: operator* (const Polynomial & p)
{
    Polynomial result;
    for (int i=0; i<100; i++)
    {
        result.coefficients[i]=coefficients[i]*p.coefficients[i];
        result.exponents[i]=exponents[i]+p.exponents[i];

    }
    result=*this;
    return result;
}
const Polynomial Polynomial :: operator= (const Polynomial &p)
{

    for (int i=0; i<100; i++)
    {
       coefficients[i]=p.coefficients[i];
       exponents[i]=p.exponents[i];
    }
    Polynomial result=*this;
    return result;
}
Polynomial& Polynomial ::  operator+= (const Polynomial & p)
{
     for (int i=0; i<100; i++)
    {
        if (exponents[i]==p.exponents[i]) coefficients[i]+=p.coefficients[i];
        else coefficients[i]=coefficients[i];
    }
    Polynomial result=*this;
    return result;
}
Polynomial& Polynomial :: operator-= (const Polynomial & p)
{
    for (int i=0; i<100; i++)
    {
        if (exponents[i]==p.exponents[i]) coefficients[i]-=p.coefficients[i];
        else coefficients[i]=coefficients[i];
    }
    Polynomial result=*this;
    return result;
}
Polynomial& Polynomial :: operator*= (const Polynomial & p)
{
    Polynomial result;
    for (int i=0; i<100; i++)
    {
        coefficients[i]*=p.coefficients[i];
        exponents[i]+=p.exponents[i];

    }
    combine(*this);
    result=*this;
    return result;
}
void Polynomial :: enterTerms (void)
{
    int n;
    cout << "enter the number of terms "; cin >> n;
    for (int i=0; i<100; i++)
    {
        cout << "enter term"<< i<< endl; cin >> exponents[i]>> coefficients[i];
    }
}
void Polynomial :: printPolynomial (void){
    for (int i=0; i<100; i++)
    {
        cout << coefficients[i]<<"X^"<<exponents[i] <<"+ " ;
    }
}
Polynomial Polynomial ::  combine (Polynomial &p)
{
    for (int i=0; i< 100;i++)
    {
        if (coefficients[i] == 0) continue;
        for (int j=1; j<100; j++)
        {

            if (p.coefficients[j]==0 ) continue;;
            if (exponents[i]=p.exponents[j]) coefficients[i]+=p.coefficients[j]; p.coefficients[j]=0; p.exponents[i]=0;
        }
    }
}