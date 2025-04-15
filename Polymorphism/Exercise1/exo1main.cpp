#include <iostream>
using namespace std;
#include "product.cpp"
#include "fresh.cpp"
#include "prepacked.cpp"

void record()
{
    int count = 0;
    string n;
    float p;
    product *array[100];
    for (int i = 0; i < 100; i++)
    {
        int option;
        n = "";
        p = 0;
        cout << "please type the next article" << endl;
        cout << "please select:" << endl;
        cout << "0: No more article " << endl;
        cout << "1: Fresh food  " << endl;
        cout << "2: Prepacked article  " << endl;
        cin >> option;

        if (option == 0)
            break;
        else if (option == 1)
        {

            array[i] = new freshfood;
            cout << "enter the name of the product" << endl;
            cin >> n;
            array[i]->setname(n);
            array[i]->scanner();
            count++;
        }
        else if (option == 2)
        {
            n = "";
            array[i] = new prepackedfood;
            cout << "enter the name of the product";
            cin >> n;
            array[i]->setname(n);
            array[i]->scanner();
            count++;
        }
        else
            cout << "please enter a valid option";
    }
    if (count == 0)
        cout << "no items are purchased" << endl;
    else
    {
        cout << "the list of the purchased products";
        for (int i = 0; i < count; i++)
        {
            array[i]->printer();
        }
        float amount = 0;
        for (int i = 0; i < count; i++)
        {
            prepackedfood *ptrppf = dynamic_cast<prepackedfood *>(array[i]);
            if (ptrppf != nullptr)
                amount = amount + ptrppf->getprice();
            else
            {
                freshfood *ptrff = dynamic_cast<freshfood *>(array[i]);
                amount = amount + ptrff->getprice();
            }
        }
        cout << "the amount: " << amount;

        for (int i = 0; i < count; i++)
        {
            delete array[i];
        }
    }
}

int main()
{
    record();
    // product *ptr=new freshfood;
    // product *ptr1=new prepackedfood;
    // ptr->scanner();
    // cout << ptr->getprice();
    // delete ptr;
    // delete ptr1;

    cout << "test";
}