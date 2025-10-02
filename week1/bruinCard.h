#include <iostream>
#include <string>
using namespace std;

class BruinCard {
public:
    // Default constructor (balance = 100.0 by default)
    BruinCard(int id, string name) : _id(id), _name(name), _balance(100.0) {
        cout << "by default, balance = 100.0" << endl;
    }

    // Overloaded constructor (explicitly provide balance)
    BruinCard(int id, string name, double balance) : _id(id), _name(name), _balance(balance) {
        cout << "the given balance = " << balance << endl;
    }

    // User-defined copy constructor
    BruinCard(const BruinCard& other) : 
    _id(other._id), _name(other._name), _balance(other._balance)  {
        cout << "copy constructor invoked" << endl;
    }

    int _id;
    string _name;
    double _balance;

};