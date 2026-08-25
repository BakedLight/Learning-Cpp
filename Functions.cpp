// SYNTAX
// returnType funcName (type p1, type p2, ....) {
//     BODY (definition of func)
// }

// Calling a function: funcName();


#include <iostream>
#include <string>
using namespace std;

// Sum of 2 numbers
int sumOfTwo (int num1, int num2) {
    return (num1 + num2);
}


//Min of 2 numbers
int minOfTwo (int num1, int num2) { //Parameters
    if (num1 > num2) {
        return num2;
    } else {
        return num1;
    }
}


// Sum if numbers from 1 to N
int sumOfN (int n) {
    int summation = 0;
    for (int i = 0; i <= n; i++) {
        summation += i;
    }
    return summation;
}


// Factorial of N
int factorialN (int n){
    int fact = 1;
    for (; n > 1; n--) {
        fact *= n;
    }
    return fact;
}


// Sum of digits of a number METHOD 1 (MORE OPTIMAL)
int sumOfDigits1 (int num) {
    int sum = 0;
    // USING WHILE LOOP
    // while (num > 0) {
    //     sum += num%10;
    //     num /= 10;
    // }
    // USING FOR LOOP
    for (; num > 0; num /= 10) {
        sum += num%10;
    }
    return sum;
}

//Sum of digits of a number METHOD 2 (LESS OPTIMAL)
int sumOfDigits2 (int num) {
    string number = to_string(num);
    int sum = 0;
    for (int i = 0; i < number.length(); i++) {
        sum += num%10;
        num = num / 10;
    }
    return sum;
}

// Binomial Coefficiet of n & r i.e. nCr
int BinCoeff (int n, int r){
    int nFact = factorialN(n);
    int rFact = factorialN(r);
    int nmrFact = factorialN(n-r);
    return (nFact)/((rFact)*(nmrFact));
}

// Prime Or Not
bool isPrime (int num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

// Print all prime numbers till N
void printPrimes (int num) {
    for (int i = 2; i <= num; i++) {
        int curPrime = true;
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0){
                curPrime = false;
                break;
            }
        }
        if (curPrime) cout << i << " ";
    }
}

//Print nth Fibonacci number
void printFibonacci (int num) {
    int prevNum1 = 1, prevNum2 = 0;
    int currentNum = prevNum1;
    for (; num > 1; num--){
        currentNum = prevNum1 + prevNum2;
        prevNum2 = prevNum1;
        prevNum1 = currentNum;
    }
    cout << currentNum << endl;
}

int main() {

    int n1, n2;
    cout << "Enter n: ";
    cin >> n1;
    // cout << "Enter r: ";
    // cin >> n2;

    // Method 1 (Using string input)
    // string str;
    // cout << "Enter number: ";
    // cin >> str;

    // cout << isPrime(n1); // Passing Arguments

    printFibonacci(n1);

    return 0;
}
