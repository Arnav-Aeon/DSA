#include <iostream>
using namespace std;

int max(int arr[] , int n ){
    int max = INT_MIN ;
    int index = 0 ;
    for(int i = 0 ; i < n ; ++i){
        if(arr[i] > max ){
            max = arr[i] ;
            index = i ; 
        }
    }
    return index;
}

void display(int arr[] , int n ){
    for(int i = 0; i < n  ; ++i){
        cout << arr[i] << ' ' ;
    }
    cout << endl ;
}

void findLargest(int **input, int nRows, int mCols){
    int sum_r[1000] = {INT_MIN} ; 
    for(int i = 0 ; i < nRows ; ++i){
        sum_r[i] = 0; 
        for(int j = 0 ; j < mCols ; ++j){
            sum_r[i] += input[i][j] ; 
        }
    } 
    
    int row_index = max(sum_r , nRows) ; 

    int sum_c[1000] = {INT_MIN} ;
    for(int i = 0 ; i < mCols ; ++i){
        sum_c[i] = 0 ;
        for(int j = 0 ; j < nRows ; ++j){
            sum_c[i] += input[j][i] ; 
        }
    }
    int col_index = max(sum_c , mCols) ; 

    if(sum_r[row_index] >= sum_c[col_index]){
        cout << "row " << row_index << " " << sum_r[row_index] ; 
    }
    else{
        cout << "column " << col_index << " " << sum_c[col_index] ; 
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}