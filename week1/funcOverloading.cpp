#include <iostream>
using namespace std;

// a) Function to add two integers
int add(int a, int b) {
    return a + b;
}

// b) Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// c) Function to add two doubles
double add(int a, double b) {
    return a + b;
}

// d) Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "add(3, 4) = " << add(3, 4) << endl; // calling which?
    cout << "add(2.5, 3.7) = " << add(2.5, 3.7) << endl; // calling which?
    cout << "add(1, 3.7) = " << add(1, 3.7) << endl; // calling which?
    cout << "add(1, 2, 3) = " << add(1, 2, 3) << endl; // calling which?

    return 0;
}
