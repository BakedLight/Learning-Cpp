#include <iostream>
using namespace std;

int main() {

    int n, mul = 1;

    cout << "Enter n to calculate n! : ";
    cin >> n;

    // While Loop
    // int i = n;
    // while (i >= 1) {
    //     mul *= i--;
    // }

    // For Loop
    for (int i = n; i >= 1; i--) {
        mul *= i;
    }

    cout << n << "! = " << mul << endl; 
    return 0;
}