#include <iostream>
using namespace std;

#include"vector.cpp"
#include"bitvector.cpp"
int main ()
{

    int initial;
    cout << "enter the value of vector 1" << endl; cin >> initial;
    Vectorr vector1(10); vector1.setall(initial);
    Vectorr vector2(10); vector2.setall(2);
    cout << "vector 1"<< endl;
    vector1.print();
    cout << "vector 2"<< endl;
    vector2.print();
    
    vector1=vector1.sumvect(vector2);
    cout << "vector sum"<< endl;
    vector1.print();
    
    cout << "vector product"<< endl;
    cout <<vector1.prodvect(vector2)<< endl;
    
    //2
    int bitVectinitial;
    cout << "enter the value of bitvector 1"<< endl; cin >> bitVectinitial;
    bitvector bitvector1(10);
    bitvector bitvector2(10);
    bitvector1.setall(bitVectinitial);
    bitvector2.setall(1);

    cout << "bitvector 1"<< endl;
    bitvector1.print();
    cout << "bitvector 2"<< endl;
    bitvector2.print();

    cout << "bitvector sum"<< endl;
    bitvector1=bitvector1.sumvect(bitvector2);
    bitvector1.print();

    cout << "bitvector product"<< endl;
    bitvector1=bitvector1.prodvect(bitvector2); 
    bitvector1.print();

    //3
    vector1.setall(initial);
    bitvector1.setall(bitVectinitial);

    cout << "vector1 after reset"<< endl;
    vector1.print();

    //4
    Vectorr *vecptr1= &vector1;
    Vectorr *vecptr2= &vector2;

    bitvector *bitvecptr1=&bitvector1;
    bitvector *bitvecptr2=&bitvector1;
    
    

    //5
    vecptr1->setall(initial);
    bitvecptr1 -> setall(bitVectinitial);

    //6

    cout << "vector1"<< endl;
    vecptr1->print();

    cout << "vector2"<< endl;
    vecptr2->print();

    *vecptr1=vecptr1->sumvect(*vecptr2);
    cout << "vector sum"<< endl;
    vecptr1->print();
    

    cout << "vector product"<< endl;
    cout <<vecptr1->prodvect(*vecptr2)<< endl;// we should downcast vecptr1 so that we can acsess the derived class function

    *bitvecptr1=bitvecptr1->sumvect(*bitvecptr2);
    cout << "bitvector sum"<< endl;
    bitvecptr1->print();

   
    *bitvecptr1=bitvecptr1->prodvect(*bitvecptr2);
    cout << "bitvector prod"<< endl;
    bitvecptr1->print();

    //7
    vecptr1->setall(initial);
    bitvecptr1 -> setall(bitVectinitial);

    //8
    vecptr1=&bitvector1;
    vecptr2=&bitvector2;

    cout << "bit vector 1 with ptr"<< endl;
    vecptr1->print();
    cout << "bit vector 2 with ptr"<< endl;
    vecptr2->print();

    *vecptr1=vecptr1->sumvect(*vecptr2);
    cout << "bitvector  sum with ptr"<< endl;
    vecptr1->print();
    
    vecptr1->prodvect(*vecptr2);
    cout << "bitvector prod with ptr"<< endl;
    cout <<vecptr1->prodvect(*vecptr2)<<endl;
   

 







    



    

    
}


    



    



