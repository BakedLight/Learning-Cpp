#include <iostream>
using namespace std;


void bubbleSort(int array[], int length, int direction = 1){ // 1-> ascending, 2-> descending => defaults to ascending
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length-1; j++){
            if ((array[j] * direction) > (array[j+1] * direction)){
                swap(array[j], array[j+1]);
            }
        }
    }
    for (int i = 0; i < length; i++) cout << array[i] << endl;
}


int binarySearch(int arr[], int target, int length){
    int s = 0, e = length-1;
    int m;
    for (int i = 0; i < length; i++) {
        if (s <= e){
            m = (s+e)/2;
            if (arr[m] == target) {
                return m;
            }
            else if (arr[m] < target) {
                s = ++m;
            }
            else if (arr[m] > target) {
                e = --m;
            }
        }
        else {
            return -1;
        }
    }
}


int main(){

    int testArray[] = {10, 69, 49, 88, 96, 79};

    bubbleSort(testArray, (sizeof(testArray)/sizeof(testArray[0])), -1);

    return 0;
}