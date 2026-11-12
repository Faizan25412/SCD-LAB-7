// Name: Muhammad Faizan
// ID: 25412
#include <iostream>
using namespace std;

int main() {
    int *arr = new int[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    for (int i = 0; i < 5; i++) {
        cout << "Array[" << i << "] = " << arr[i] << endl;
    }
    delete[] arr;
    return 0;
}
