#include <iostream>
using namespace std;

int main() {
    int number = 42;
    int* ptr = &number;

    cout << "Value of number: " << number << endl;
    cout << "Address of number: " << &number << endl;
    cout << "Value stored in pointer (Address): " << ptr << endl;
    cout << "Value pointed to by pointer: " << *ptr << endl;

    *ptr = 100;

    cout << "New value of number: " << number << endl;

    return 0;
}
