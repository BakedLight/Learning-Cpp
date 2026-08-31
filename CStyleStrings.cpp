// Let's say we wanna store a name in array rather than distinct values
// The values that are not given (i.e., empty spaces) are filled by default with "Garbage Value" => Compiler understands this Garbage Value as place holder
// This Garbage Value looks like "\0" which acts as a 'null' character


#include <iostream>
using namespace std;

int main() {
    {
    char name[10];
    char name2[10] = {'S', 'H', '\0', 'I', 'V', '\0'}; // Put null character always at the end of character array, it won't read anything after that.
    char name3[] = {'S', 'H', 'I', 'V', '\0'};
    char name4[] = "SHIV"; // Null character is automatic in this case

    cout << name2 << endl;
    cout << name3 << endl;
    cout << name4 << endl;
    }

    {
    // C Style String
    char name[100];
    cout << "Enter a Name: ";
    //cin >> name; // only takes input before first "space", "tab" or "line change"
    cin.getline(name, 100); // cin.getline(variable, size) => Allows input till "line change" i.e., space and tab are also part of the input
    // if size in getline is less than input given, it takes input only till the number of characters needed by getline function
    cout << name << endl;
    }

    return 0;
}