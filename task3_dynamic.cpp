// Name: Muhammad Faizan
// ID: 25412
#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;
    *ptr = 50;
    cout << "Value: " << *ptr << endl;
    delete ptr;
    return 0;
}
