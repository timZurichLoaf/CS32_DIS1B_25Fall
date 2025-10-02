#include "bruinCard.h"


void printBalance(BruinCard card){
    cout << "- balance: " << card._balance << endl;
}

void printBalance(BruinCard* cardPtr){
    cout << "- balance: " <<  (*cardPtr)._balance << endl;
    // or use the syntactic sugar below
    // cout << cardPtr->_balance << endl;
}

void printBalanceByAdd(BruinCard& card){
    cout << "- balance: " << card._balance << endl;
}

int main(){
    BruinCard myCard(1, "Z", 100.0);
    
    BruinCard* myCardPtr = &myCard;

    printBalance(myCard);

    printBalance(myCardPtr);

    printBalanceByAdd(myCard);

    return 0;
}