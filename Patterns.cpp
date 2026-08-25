#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

// 1. SQUARE PATTERN OF NUMBER
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

// 2. SQUARE PATTERN OF CHARACTERS
    // for (int i = 0; i < n; i++) {
    //     char chr = 'A';
    //     for (int j = 0; j < n; j++) {
    //         cout << chr << " ";
    //         chr = chr + 1;
    //     }
    //     cout << endl;
    // }

// 3. SQUARE PATTERN OF CONTINUING NUMBERS
    // int series = 1;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << series << " ";
    //         series += 1;
    //     }
    //     cout << endl;
    // }

// 4. TRIANGLE PATTERN WITH STARS
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

// 5. TRIANGLE PATTERN WITH NUMBERS
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= i; j++) {
    //         cout << (i + 1) << " ";
    //     }
    //     cout << endl;
    // }

// 6. TRIANGLE PATTERN WITH SUCCESSIVE NUMBERS
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= i; j++) {
    //         cout << (j+1) << " ";
    //     }
    //     cout << endl;
    // }

// 7. REVERSE TRIANGLE PATTERN
    // for (int i = 0; i < n; i++) {
    //     for (int j = i+1; j > 0; j--) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
            
// 8. FLOYD'S TRIANGLE PATTERN
    // int num = 1;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= i; j++) {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

// 9. INVERTED TRIANGLE PATTERN 1
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n-i; j++) {
    //         cout << (i+1) << " ";
    //     }
    //     cout << endl;
    // }

// 10. INVERTED TRIANGLE PATTERN 2
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i; j++) {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < n-i; k++) {
    //         cout << (i+1) << " ";
    //     }
    //     cout << endl;
    // }

// 11. INVERTED TRIANGLE PATTERN 3
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i; j++) {
    //         cout << "  ";
    //     }
    //     for (int k = 0; k < n-i; k++) {
    //         cout << (i+1) << " ";
    //     }
    //     cout << endl;
    // }

// 12. INVERTED TRIANGLE PATTERN 3 (CHARACTER VERSION)
    // char chr = 'A';
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i; j++) {
    //         cout << "  ";
    //     }
    //     for (int k = 0; k < n - i; k++) {
    //         cout << chr << " ";
    //     }
    //     chr += 1;
    //     cout << endl;
    // }

// 13. PYRAMID PATTERN
    // Method 1 (TRIPLE NESTED LOOP) -> Less Efficient
    // for (int i = 0; i < n; i++) {
    //     int num = 1;
    //     for (int j = 0; j < (n - i - 1); j++) {
    //         cout << "  ";
    //     }
    //     for (int k = 0; k <= i ; k++) {
    //         cout << num << " ";
    //         if (k == i) {
    //             num--;
    //             for (; num > 0; num--) {
    //                 cout << num << " ";
    //             }
    //         } else {
    //             num ++;
    //         }
    //     }
    //     cout << endl;
    // }

    // Method 2 (3 Loops inside 1) -> More Efficient
    // for (int i = 0; i < n; i++) {
    //     int num = 1;
    //     for (int j = 0; j < (n - i - 1); j++) {
    //         cout << "  ";
    //     }
    //     for (int k = 0; k <= i ; k++) {
    //         cout << num << " ";
    //         num++;
    //     }
    //     num -= 2;
    //     for (; num > 0; num--) {
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // }

// 14. Hollow Diamond Pattern
    // int spaceCount = 0;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < (n-i-1); j++) {
    //         cout << "  ";
    //     }
    //     cout << "*";
    //     for (int k = 1; k < spaceCount; k++) {
    //         cout << "  ";
    //     }
    //     if (spaceCount > 0) cout << " *";
    //     cout << endl;
    //     spaceCount += 2;
    // }
    // spaceCount -= 4;
    // for (int i = 0; i < n-1; i++) {
    //     for (int j = 0; j <= i; j++) {
    //         cout << "  ";
    //     }
    //     cout << "*";
    //     for (int k = 1; k < spaceCount; k++) {
    //         cout << "  ";
    //     }
    //     if (spaceCount > 0) cout << " *";
    //     cout << endl;
    //     spaceCount -= 2;
    // }

// 15. BUTTERFLY PATTERN
    // for (int i = n; i > 0; i--) {
    //     int spaces = (2 * (i - 1));
    //     for (int j = 0; j <= (n-i); j++) {
    //         cout << "* ";
    //     }
    //     for (int k = 0; k < spaces; k++) {
    //         cout << "  ";
    //     }
    //     for (int j = 0; j <= (n-i); j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++) {
    //     int spaces = (2 * i);
    //     for (int j = n; j > i; j--) {
    //         cout << "* ";
    //     }
    //     for (int k = 0; k < spaces; k++) {
    //         cout << "  ";
    //     }
    //     for (int j = n; j > i; j--) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    return 0;
}