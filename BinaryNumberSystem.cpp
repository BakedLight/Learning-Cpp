#include <iostream>
#include <string>
using namespace std;

int power (int value, int exp) {
    int result = 1;
    for (; exp > 0; exp--) {
        result *= value;
    }
    return result;
}

int binAdd (int bin1, int bin2) {
    string strBin1 = to_string(bin1);
    string strBin2 = to_string(bin1);
    int carry = 0;
    int place = 1;
    int curSum = 0;
    int result = 0;
    for (int i = max(strBin1.length(), strBin2.length()); i > 0; i--) {
        curSum = (bin1 % 10) + (bin2 % 10) + carry;
        bin1 /= 10;
        bin2 /= 10;
        if (curSum == 1) {
            result += 1 * place;
            carry = 0;
        } else if (curSum == 2) {
            carry = 1;
        } else if (curSum == 3) {
            result += 1 * place;
            carry = 1;
        }
        place *= 10;
        if (i == 1) {
            result += carry * place;
        }
    }
    return result;
}

int firstComplement(int bin, bool isPositive = true) {

    string num;

    if (isPositive == false) num = '0'+ to_string(bin);
    else num = to_string(bin);

    int firstCompl = 0;
    int place = 1;
    for (int i = num.length()-1; i >= 0; i--) {
        if (num.at(i) == '0') {
            firstCompl += 1 * place;
        }
        place *= 10;
    }
    return firstCompl;
}

int decToBin (int decNum) {
    bool positive = true;
    
    if (decNum == 0) {
        return 0;
    } else if (decNum < 0) {
        decNum = -decNum;
        positive = false;
    }

    //Binary Conversion
    int bin = 0;
    for (int i = 1; decNum > 0; i *= 10) {
        bin += (decNum % 2) * i;
        decNum = decNum / 2;
    }
    if (positive) return bin; // Enough for +ve numbers
    
    //For -ve numbers
    int firstCompl = firstComplement(bin, false);
    int secondCompl = binAdd(firstCompl, 1);

    return secondCompl;
}

int binToDec (int binNum) {

    char sign;
    cout << "Enter Sign Of This Digit (p / n): ";
    cin >> sign;

    if (sign == 'n') {
        int firstCompl = firstComplement(binNum);
        //Second Complement
        cout << firstCompl << endl;
        binNum = binAdd(firstCompl, 1);
    }

    int dec = 0;
    for (int i = 1; binNum > 0; i *= 2) {
        dec += (binNum % 10) * i;
        binNum /= 10;
    }
    if (sign == 'n') dec = -dec;
    return dec;
}

// =================================Check if the number is power of 2=============================
// Method 1 (loop method)
bool isPowTwoLoop(int num) {
    for (; num > 1; ) {
        if (num%2 == 0) {
            num /= 2;
        } else {
            return false;
        }
    }
    return true;
}

// Method 2 (using bits & loops)
bool isPowTwoBits(int num) {
    if (num > 0) {
        int bin = decToBin(num);
        int ones = 0;
        for (int i = 1; bin >= 1; i++){
            if (bin%10 == 1){
                if (ones == 0) ones += 1;
                else return false;
            }
            bin = decToBin(num >> i);
        }
        return true;
    } else return false;    
}

// Method 3 (Using sense) (2^x = 10000....x zeroes; just previous number = 01111...x ones; (2^x & prev num) == 0 ALWAYS)
bool isPowTwoSense(int num) {
    if (num > 0) {
        if ((num & (num - 1)) == 0) return true;
        else return false;
    } else return false;
}

//Method 4
bool isPowTwo4(int num) {
    return (num > 0) && ((num & -num) == num);
}

// ========================================================================


int reverse (int num) {
    int result = 0;
    int sign = 1;

    if (num<0) {
        num = -num;
        sign = -1;
    }

    int digits = 0;
    int numCopy = num;

    for(digits = 0; numCopy > 0; (digits++, numCopy /= 10)) {
    }

    for(int place = power(10, (digits - 1)); num > 0; (place /= 10, num /= 10)) {
        cout << place << endl;
        result += (num%10) * place;
    }

    return sign * result;

}


int main() {

    for (int i = 0; i < 1; ){
        cout << "================= BINARY & DECIMAL CONVERTER ===============\n";
        cout << "1. Decimal --> Binary\n";
        cout << "2. Binary --> Decimal\n";
        cout << "3. Binary Addition\n";
        cout << "4. First Complement of a Binary Number\n";
        cout << "5. Check if a Number is Power of 2\n";
        cout << "6. Reverse an Integer\n";
        cout << "7. QUIT\n\n";

        int pick, num1, num2;
        cout << "Select an option: ";
        cin >> pick;

        if (pick == 1) {
            cout << "Enter a decimal to convert: ";
            cin >> num1;
            cout << "Binary value of " << num1 << " = " << decToBin(num1) << endl;
        } else if (pick == 2) {
            cout << "Enter a binary to convert: ";
            cin >> num1;
            cout << "Decimal value of " << num1 << " = " << binToDec(num1) << endl;
        } else if (pick == 3) {
            cout << "Enter binary 1: ";
            cin >> num1;
            cout << "Enter binary 2: ";
            cin >> num2;
            cout << "The sum is " << binAdd(num1, num2) << endl;
        } else if (pick == 4) {
            cout << "Enter a binary to get compliment: ";
            cin >> num1;
            cout << "The compliment is: " << firstComplement(num1) << endl;
        } else if (pick == 5) {
            cout << "Enter a number to check: ";
            cin >> num1;
            if (isPowTwo4(num1)) cout << num1 << " is a power of 2\n";
            else cout << num1 << " is not a power of 2\n";
        } else if (pick == 6) {
            cout << "Enter an integer to reverse: ";
            cin >> num1;
            cout << "Reverse = " << reverse(num1) << endl;
        } else if (pick == 7) {
            break;
        } else {
            cout << "Select a valid option\n";
        }
        cout << endl;
    }

    return 0;
}