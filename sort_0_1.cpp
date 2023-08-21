#include <iostream>
#include <algorithm>
using namespace std;

#include<bits/stdc++.h>
void sortZeroesAndOne(int *input, int size)
{
    int count = 0 ; 
    for(int i = 0 ; i < size ; ++i){
        if(*(input+i) == 0){
            count++ ; 
            *(input+i) = 1 ; 
        }
    }
    for(int i = 0 ;  i < count ; ++i){
        *(input+i) = 0 ; 
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

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}