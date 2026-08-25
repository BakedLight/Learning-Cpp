// ==================== Notes ================================
// Info:
// -> 1st DataStructure
// -> Store same type of data
// -> Contiguous (continuous in manner) in memory
// -> Linear
// ------------------------------------------------------------
// Creation:
// -> int arrayName[size of array] = {val0, val1, val2, ....};
// -> not entering size of array results in array being same size as number of values
// ------------------------------------------------------------
// Accessing:
// -> index starts from 0 and goes till (size-1)
// -> arrayName[index] can be treated as a variable and changing its value updates correponding value in array
// -> Trying to access values through indices below 0 or after (arraySize-1) will give "index out of range error"
// ------------------------------------------------------------
// Loops on Arrays:
// -> We run loop from 0 to (size-1)
// -> sizeof(arrayName) is used to calculate size of array (in bytes)
// -> For size (in numbers), use (sizeof(arrayName) / sizeof(dType of array element))
// ------------------------------------------------------------
// Pass by Reference:
// -> Used by default for non-primitive datatypes (eg: arrays)
// -> Internally the array in original function is reffered instead of being copied
// -> Name of array is a pointer (pointers store address of data) - having a pointer removes need of copying
// -> Editing referenced array also edits the original 'cause both are same not clone
// -> Manually create a clone to have changes only in secondary function
// ------------------------------------------------------------
// Linear Search:
// -> Fixed algorithm on arrays to search (multiple ways exist, this is one of them)
// -> Finding a target value in array and returning its index
// -> Run a loop on all indices from start and return the index where the target is found
// -> Return -1 (signifying invalid index) if target isn't found after entire search
// ============================================================


#include <iostream>
using namespace std;

int smallestInArray (int array[], int size) {
    int smallest = array[0];
    for (int i = 0; i < size; i++) {
        if (smallest > array[i]) {
            smallest = array [i];
        }
    }
    return smallest;
}
int largestInArray (int array[], int size) {
    int largest = array[0];
    for (int i = 0; i < size; i++) {
        if (largest < array[i]) {
            largest = array [i];
        }
    }
    return largest;
}

int linearSearch (int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

void reverseArray (int arr[], int size) {
    // Method 1
    // int tempArr[size];
    // for (int i = (size-1), j = 0; i >= 0; i--, j++) {
    //     tempArr[j] = arr[i];
    // }
    // arr = tempArr;

    // Method 2 (better) [2 Pointer Approach]
    for (int start = 0, end = (size-1); start < end; start++, end--){ // start, end are pointers
        swap(arr[start], arr[end]);
    }
}

int sumOfArray (int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
int productOfArray (int arr[], int size) {
    int prod = 1;
    for (int i = 0; i < size; i++) {
        prod *= arr[i];
    }
    return prod;
}

void swapMinMax (int arr[], int size) {
    int minimum = smallestInArray(arr, size);
    int maximum = largestInArray(arr, size);
    int mnInd = linearSearch(arr, size, minimum);
    int mxInd = linearSearch(arr, size, maximum);
    swap(arr[mnInd], arr[mxInd]);
}

void printUnique (int arr[], int size) {

    // Copy original array
    int copyArr[size];
    for (int i = 0; i < size; i++){
        copyArr [i] = arr[i];
    }

    // Filter unique values
    int uniques[size];
    for (int i = 0; i < size; i++) {
        for (int j = (i+1); j < size; j++) {
            if (copyArr[i] == copyArr[j]){
                copyArr[i] = INT32_MAX;
                copyArr[j] = INT32_MAX;
                break;
            }
        }
    }

    // Transfer unique values
    int place = 0;
    for (int i = 0; i < size; i++) {
        if (copyArr[i] != INT32_MAX){
            uniques[place] = copyArr[i];
            place++;
        }
    }

    // Print unique values
    for (int i = 0; i < place; i++) {
        cout << uniques[i] << " ";
    }
    cout << endl;
}

int printIntersection (int arr1[], int size1, int arr2[], int size2){
    for (int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int size = 5;
    int marks[size] = {1, 2, 3, 4, 5};
    marks[1] = 2;
    int age[size] = {6, 7, 8, 3, 1};

    // Taking user input
    // int n;
    // cout << "Enter " << size << " values: ";
    // for (int i = 0; i < size; i++) {
    //     cin >> n;
    //     marks [i] = n;
    // }

    // Finding smallest and largest number in array
    // cout << "Smallest is " << smallestInArray(marks, 5);
    // cout << " and Largest is " << largestInArray(marks, 5);

    // reverseArray(marks, size);

    for (int i = 0; i < size; i++) {
        cout << marks[i] << endl;
    }
    
    // cout << "Sum = " << sumOfArray(marks, size) << endl;
    // cout << "Product = " << productOfArray(marks, size) << endl;

    // swapMinMax(marks, size);
    // for (int i = 0; i < size; i++) {
    //     cout << marks[i] << endl;
    // }

    printIntersection(marks, size, age, size);

    return 0;
}