#include<bits/stdc++.h>
#include<sudoku.h>
using namespace std;


int main() {
    vector<vector<char>> board(9, vector<char>(9, '0'));
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            cin >> board[i][j];
        }
    }
    
    Sudoku sol;
    sol.solveSudoku(board);

    return 0;
}
