//SYNTAX
//for (initialisation; condition; updation) {
//  Statement(s);
//}

#include <iostream>
using namespace std;

int main() {
    
    int sum = 0, n;
    
    cout << "Enter a number to get sum till that number: ";
    cin >> n;

    // Same Logic Using While Loop
    // while (n > 0) {
    //     sum += n--;
    // }

    // Sum of Odd Numbers From 1 To n
    for (int i = 1; i <= n; i++) {

        if (i%2 != 0) {
            sum += i;
        }

    }
    
    cout << "The sum of Odd numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}