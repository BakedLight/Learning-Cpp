// 1. !, ++, -- (Unary Operators) (R -> L)
// 2. *, /, % (Arithematic (l -> R)
// 3. +, -      operators) (l -> R)
// 4. &, |, ^, <<, >> (Bitwise Operators) (l -> R)
// 5. <, <=, >=, > (Relational (l -> R)
// 6. ==, !=        Operators) (l -> R)
// 7. &&    (Locgical (l -> R)
// 8. ||    Operators) (l -> R)
// 9. = (Assignment operator) (R -> L)

#include <iostream>
using namespace std;

int main () {

    cout << (4 * 5 % 2) << endl;
    cout << (5 % 2 * 4) << endl;

    return 0;
}