#include <iostream>
using namespace std;

// Bitwise AND - "&" (0^0 = 0, 0^1 = 0, 1^0 = 0, 1^1 = 1)
// Bitwise OR - "|" (0^0 = 0, 0^1 = 1, 1^0 = 1, 1^1 = 1)
// Bitwise XOR - "^" (0^0 = 0, 0^1 = 1, 1^0 = 1, 1^1 = 0)
// Bitwise NOT - "~" (~0 = 1, ~1 = 0)
// Bitwise Left Shift Operator(LSO) - "<<" => "n << i" : Binary form mein har bit left ki taraf 'i' spaces shift ho jaata hai
//      (a << b) = a * (2^b)
// Bitwise Right Shift Operator(RSO) - ">>" => "n >> i" : Binary form mein har bit right ki taraf 'i' spaces shift ho jaata hai
//      (a >> b) = a / (2^b)

int main () {
    
    cout << (10 << 2) << " " << (10 >> 1) << endl;
    
    return 0;
}