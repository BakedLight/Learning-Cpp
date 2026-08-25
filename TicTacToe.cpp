#include <iostream>
#include <vector>
#include <map>
using namespace std;

void reset(vector<int>& placeData){
    int currentPlayerNum = 1;

    placeData = {0, 0, 0, 0, 0, 0, 0, 0, 0}; // 0 -> Empty, 1 -> O, -1 -> X.

    cout << "========== TIC TAC TOE ===========" << endl;

}

void showGrid(vector<int>& placeData){
    int i = 1;
    for (int state: placeData){
        cout << "|";
        if (state == 0){
            cout << " " << i << " ";
        } else if (state == 1){
            cout << " O ";
        } else{
            cout << " X ";
        }
        
        if (i%3 == 0){
            cout << "|";
            cout << endl;
        }

        i++;
    }
}

bool isFinished(vector<int>& placeData, int move){
    vector<int> row_one = {1, 2, 3};
    vector<int> row_two = {4, 5, 6};
    vector<int> row_three = {7, 8, 9};
    vector<int> column_one = {1, 4, 7};
    vector<int> column_two = {2, 5, 8};
    vector<int> column_three = {3, 6, 9};
    vector<int> diag_one = {1, 5, 9};
    vector<int> diag_two = {3, 5, 7};
    map<int, vector<vector<int>>> checkTable = {
        {1, {row_one, column_one, diag_one}},
        {2, {row_one, column_two}},
        {3, {row_one, column_three, diag_two}},
        {4, {row_two, column_one}},
        {5, {row_two, column_two, diag_one, diag_two}},
        {6, {row_two, column_three}},
        {7, {row_three, column_one, diag_two}},
        {8, {row_three, column_two}},
        {9, {row_three, column_three, diag_one}},
    };

    int checkCounter = 0;
    for (int i=0; i < checkTable[move].size(); i++){
        for (int place: checkTable[move][i]){
            checkCounter += placeData[place-1];
        }
        if (abs(checkCounter) == 3){
            return true;
        }
        else {
            checkCounter = 0;
        }
    }
    return false;
}

void makeMove(vector<int>& placeData, int move, int playerNum){
    placeData[move-1] = playerNum;
}

int main(){

    string pName1, pName2, currentPlayer;
    bool playing = true;
    int currentPlayerNum = 1;

    vector<int> placeData(9, 0); // 0 -> Empty, 1 -> O, -1 -> X.

    cout << "========== TIC TAC TOE ===========" << endl;

    cout << "Name Player 1: ";
    cin >> pName1;
    cout << "Name Player 2: ";
    cin >> pName2;
    currentPlayer = pName1;
    currentPlayerNum = 1;
    
    int moveCounter = 0;

    while (playing){
        int move;
        showGrid(placeData);
        while (true){
            cout << currentPlayer << "'s Move: ";
            cin.clear();
            cin >> move;
            if (move >=1 && move <= 9){
                if (placeData[move-1] == 0) {
                    makeMove(placeData, move, currentPlayerNum);
                    break;
                }
                else cout << "Enter a valid move" << endl;
            }
            else cout << "Enter a valid move" << endl;
        }

        moveCounter++;

        if (isFinished(placeData, move)){
            char press[1];
            cout << currentPlayer << " Has WON !!" << endl;
            cout << "Press anything to play again: ";
            cin.ignore();
            cin.getline(press, 1);
            moveCounter = 0;
            reset(placeData);
        } else if (moveCounter == 9){
            char press[1];
            cout << "DRAW !!" << endl;
            cout << "Press anything to play again: ";
            cin.ignore();
            cin.getline(press, 1);
            moveCounter = 0;
            reset(placeData);
        } else{
            currentPlayerNum *= -1;
            if (currentPlayerNum == 1) {currentPlayer = pName1;}
            else {currentPlayer = pName2;}
        }
    }

    return 0;
}