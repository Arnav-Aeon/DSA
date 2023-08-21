#include <iostream>
using namespace std;

void swap(int *a , int *b){
    int temp = *a ;
    *a = *b ; 
    *b = temp ; 
}

void bubbleSort(int *input, int size)
{
    for(int i = 0 ; i< size ; ++i){
        for(int j = 0 ; j < size-1 ; ++j){
            if(input[j] > input[j+1]){
                swap(input[j] , input[j+1]) ; 
            }
        }
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

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}