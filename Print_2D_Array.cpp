#include <iostream>

using namespace std;


void print2DArray(int **input, int row, int col) {
    for(int i = 0 ; i < row ; ++i){
        for(int k = i ; k < row ; ++k){
            for(int j = 0 ; j < col ; ++j){
                cout << input[i][j] << " " ; 
            }
            cout << endl ; 
        }
    }
}
int main() {
    int row, col;
    cin >> row >> col;

    int **input = new int*[row];
    for(int i = 0; i < row; i++) {
	    input[i] = new int[col];
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    print2DArray(input, row, col);
}
