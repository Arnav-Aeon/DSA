#include <bits/stdc++.h>

using namespace std ; 

// void rotate(int *input , int d , int n){
//     while(d > n){
//         d = d - n ; 
//     }
	
//     for(int i = d-1 ; i >= 0 ; --i){
//         for(int j = i ; j < n-1 ; ++j){
//             swap(input[j] , input[j+1]) ; 
//         }

//     }
// }

void rotate(int *input , int d , int n){
    while(d >= n && d != 0){
        d = d - n ; 
    }
	int arr[n] ; 
	
	
	int j = 0 ; 
	for(int i = d; i < n ; ++i ){
		arr[j] = input[i] ; 
		j++ ; 
	}
	for(int i = 0 ; i < d ; ++i){
		arr[j] = input[i] ; 
		j++ ; 
	}

	for(int i = 0 ; i < n ; ++i){
		input[i] = arr[i] ; 
	}
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}