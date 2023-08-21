#include<bits/stdc++.h>
using namespace std;

void rotate(int *input, int d, int n)
{   int t = 0 ;
    int arr[d] ; 
    for(int i = 0 ; i < n ; ++i){
        if(i < d){
            arr[i] = input[i] ;
        }
        else{
            swap(input[i] , input[i-d]) ; 
        }
    }
    for(int i = d ; i > 0 ; --i){
        input[n-i] = arr[d-i] ; 
    }
    // sort(input , input+n-t) ;
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