#include <iostream>
using namespace std;

int main() {

    int num;
    bool isPrime = true;

    cout << "Enter Number To Check: ";
    cin >> num;

    // ====================================APPROACH 1 (More Intuitive, Less Optimal)==============================================
    // // Option 1
    // for (int i = 2; i < num; i++) {
    //     if (num % i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }

    // // Option 2
    // // int i = 2;
    // // while (i < num) {
    // //     if (num % i == 0){
    // //         isPrime = false;
    // //         break;
    // //     }
    // //     i++;
    // // }

    // =====================================APPOACH 2 (Less Intuitive, More Optimal)===================================================s
    //Factors repeat after getting in form of "root(n) * root(n)", i factor hi hai.
    // -> (i * i <= n) pe hi agr factor nikal aaya to theek warna aage bhi nahi aayega 'cause repeated hi hai so no need to check
    
    //Using for loop
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0){
            isPrime = false;
            break;
        }
    }

    // Using While Loop
    // int i = 2;
    // while (i * i <= num){
    //     if (num % i == 0) {
    //         isPrime = false;
    //         break;
    //     }
    //     i++;
    // }

    // =====================================================================================================================

    if (isPrime) {
        cout << "The number " << num << " is a Prime number\n";
    } else {
        cout << "The number " << num << " is not a Prime number\n";
    }

    return 0;
}