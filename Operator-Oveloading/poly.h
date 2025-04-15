#ifndef POLY_H
#define POLY_H
// using namespace std;
#include <iostream>

class Polynomial
{
public:
Polynomial ();
Polynomial operator+ (const Polynomial &);
Polynomial operator- (const Polynomial &);
Polynomial operator* (const Polynomial &);
const Polynomial operator= (const Polynomial &);
Polynomial& operator+= (const Polynomial &);
Polynomial& operator-= (const Polynomial &);
Polynomial& operator*= (const Polynomial &);
void enterTerms (void); 
void printPolynomial (void);

private:
int exponents[100];
int coefficients[100];
Polynomial combine (Polynomial &); //combine common terms
};



#endif