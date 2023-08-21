#include <bits/stdc++.h>
using namespace std;

void pushZeroesEnd(int *input, int size) {
	int count = 0 ; 
	int t = 0 ; 
	for(int i = 0 ; i < size ; ++i){
		if(input[i] != 0){
			input[t] = input[i];
			t++ ;
		}
		else{
			count++ ; 
		}
	}
	for(int i = 0 ; i < count ; ++i){
		input[i+t] = 0 ; 
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}