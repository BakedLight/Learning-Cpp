// NOTE: cin >> only takes input till space/tab/line change (\n) without incl. them
// if you wanna incl. them as input, use cin.getline(variable) method;

#include <iostream>
using namespace std;

int main() {
    
    // int value;
    // char chr;

    // cout << "Enter Character: ";
    // cin >> chr;

    // value = chr;

    // cout << value << endl;

    // // Option 1
    // // cout << (((value >= 65) && (value <= 90)) ? "Uppercase" : "Lowercase") << endl;
    // // condition? Statement1 : Statement2 => Works the same as:
    // // if (condition) {Statement1}
    // // else {Statement2}

    // //Option 2
    // if ((value >= 65) && (value <= 90)) {
    //     cout << "The Character is Uppercase\n";
    // }
    // else if ((value >= 97) && (value <= 122)) {
    //     cout << "The Character is Lowercase\n";
    // }
    // else {
    //     cout << "The Character is Neither Uppercase Nor Lowercase\n";
    // }

    // Switch Statements - similar to match statements in gdscript or python

    char chr = 'T';
    // Method 1
    // switch (chr){
    //     case 'A': {
    //         cout << "Vowel" << endl;
    //         break;
    //     }
    //     case 'E': {
    //         cout << "vowel" << endl;
    //         break;
    //     }
    //     case 'I': {
    //         cout << "Vowel" << endl;
    //         break;
    //     }
    //     case 'O': {
    //         cout << "Vowel" << endl;
    //         break;
    //     }
    //     case 'U': {
    //         cout << "Vowel" << endl;
    //         break;
    //     }
    //     default: {
    //         cout << "Consonent" << endl;
    //     }

    // OR Method 2: Not using break taaki fallback option use kar sake
    switch (chr) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': {
            cout << "Vowel" << endl;
            break;
        }
        default: {
            cout << "Consonant" << endl;
        }
    }
    
    return 0;
}