#ifndef Vector_H
#define Vector_H


class Vectorr {
    private:
    int n;
    int *integers;
    // int *array=new int[n]
    public :
    Vectorr (int ); 
    ~Vectorr();               //int *arr=nullptr : how to initialize a null ptr
    Vectorr  sumvect (const Vectorr& v);

    int prodvect (const Vectorr& v);
    int getsize(); // we dont have to make these fun vir since
    // we need them as they are, the derived class isnt going to have another implementation of these fun 
    void print ();
    int  getvalue (int);
    void setvalue(int,int value);
    void setall (int=0);

};
#endif