
#include "exo1.cpp"
#include <cmath>
int main ()
{
    cout << "Division:"<< endl;
    try {
        int a,b;
        cout << "enter the two numbers"<< endl;
        cin >>a >>b;
        if (b==0) throw DivideByZeroException();
        else cout << a/b << endl;
        
    }
    catch (DivideByZeroException m)
    {
        cout <<"exception caught:" << m.what();
    }

     cout << "big number"<< endl;

    try {
        int a;
        cout << "enter the  number"<< endl;
        cin >>a ;
        if (a> 500000) throw OverflowException();
        else cout << a<< endl;
        
    }
    catch (OverflowException m)
    {
        cout << "exceprtion caught:" <<m.what();
    }

    
    try {
        int a;
        cout << "enter the  number"<< endl;
        cin >>a ;
        if (a<0) throw  RootOfNegativeException();
        else cout << sqrt(a)<< endl;
        
    }
    catch (RootOfNegativeException m)
    {
        cout <<"exceprtion caught:" << m.what();
    }

    
}
