
# Exercise 1

A Polynomial is represented with terms, each term contains a coefficient and an exponent. The
term 2x
4 has the coefficient 2 and the exponent 4.
The internal representation of a polynomial is an array of coefficients and an array of exponents.
According to the template given below develop a complete class Polynomial. This class should
provide the following oveloaded operators capabilities:
a. Overload the addition operator (+) to add two Polynomials.
b. Overload the subtraction operator (-) to subtract two Polynomials.
c. Overload the assignment operator (=) to assign one Polynomial to another.
d. Overload the multiplication operator (*) to multiply two Polynomials .
e. Overload the addition assignment operator (+=), the addition subtraction assignment
operator (-=) and the multiplication assignment operator (*=).
 Class Polynomial
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
 void enterTerms (void); //input terms of polynomial
 void printPolynomial (void);

 private:
 int exponents[100];
 int coefficients[100];
 void polynomial combine (Polynomial &); //combine common terms
 };
