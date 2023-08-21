#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int *input, int n)
{
    int max = INT_MIN ;   
    for(int i = 0; i < n ; ++i){
        if(max < input[i]){
            max = input[i] ; 
        }
    }

    int sec_max = INT_MIN ; 
    for(int i = 0; i < n ; ++i){
        if(sec_max < input[i] && input[i] != max){
            sec_max = input[i] ; 
        }
    }
    return sec_max; 
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}