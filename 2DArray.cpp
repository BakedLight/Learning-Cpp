#include <iostream>
using namespace std;

int main(){

    int arr[2][2] = {{1, 2}, {3, 4}};
    int sum = 0;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            if (i == j){
                sum += arr[i][j];
            }
        }
    }
    cout << "sum = " << sum << endl;

    return 0;
}