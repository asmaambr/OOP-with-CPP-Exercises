using namespace std;
#include <iostream>
#include "coin10.cpp"
#include "coin50.cpp"
#include "coin20.cpp"
#include "coin.cpp"
#include <typeinfo>
#include <ctime>
#include <unistd.h>

static int balance=0;
void evaluateToss ( coin * coin ) {
    if (coin->toss()) {balance+=coin->getValue()
    ;cout <<"u got head"<< endl;
    cout <<"ur balance is "<< balance<< endl;
    }
    else cout <<"u got tail"<<endl;

}
void game ()
{
    int i=1;
    coin * coins[3] ={new coin10, new coin20, new coin50};
    while ( balance <100){

        cout << "toss the three coins please "<<endl;
        cout << "round "<<i<< endl;
        for (coin * ptr : coins)
        {
            evaluateToss(ptr);
            sleep(2);
        }
        i++;
        
    }
    if ( balance ==100) 
    cout << "well done! u've won the 100 DA "<< endl;
    else cout << "u've lost the game, better luck next time "<< endl;
    for (coin* ptr:coins)
    {
        delete ptr;
    }

}

int main ()
{
    game();
   
}