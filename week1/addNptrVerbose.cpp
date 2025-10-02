#include "bruinCard.h"
// #define VERBOSE false
#define VERBOSE true

void printBalance(BruinCard card){
    if (VERBOSE) {
        cout << "the address of myCard's copy is " << &card << endl;
    }
    cout << "- balance: " << card._balance << endl;
}

void printBalance(BruinCard* cardPtr){
    if (VERBOSE) {
        cout << "the address of myCardPtr's copy is " << &cardPtr << endl;
        cout << "which points to " << cardPtr << endl;
    }
    cout << "- balance: " <<  (*cardPtr)._balance << endl;
    // or use the syntactic sugar below
    // cout << cardPtr->_balance << endl;
}

void printBalanceByAdd(BruinCard& card){
    if (VERBOSE) {
        cout << "the copy of myCard's address is " << &card << endl;
    }
    cout << "- balance: " << card._balance << endl;
}

int main(){
    BruinCard myCard(1, "Z", 100.0);
    

    BruinCard* myCardPtr = &myCard;

    if (VERBOSE) {
        cout << "the address of myCard is " << &myCard << endl;
    }
    printBalance(myCard);

    if (VERBOSE) {
        cout << "the address of myCardPtr is " << &myCardPtr << endl;
        cout << "which points to " << myCardPtr << endl;
    }
    printBalance(myCardPtr);

    printBalanceByAdd(myCard);

    return 0;
}