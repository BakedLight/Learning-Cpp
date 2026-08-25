// Changing existing datatypes
// long -> Ensures >= 4 Bytes of memory is reserved; eg: {long int x; long double x; etc...}
// long long -> Ensures >= 8 Bytes of memory
// short -> 2 Bytes of memory
// signed -> signed integers
// unsigned -> only positive values (doubles input range)

#include <iostream>
using namespace std;

int main () {
    unsigned int x = -10;
    cout << x << endl;
    return 0;
}