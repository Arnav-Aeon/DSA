#include <iostream>
using namespace std;

void swap(int *a , int *b){
    int temp = *a ; 
    *a = *b ; 
    *b = temp ; 
}

void insertionSort(int *input, int size)
{
    for(int i = 1 ; i < size ; ++i){
        for(int j = i-1 ; j >= 0  ; --j){
            if(input[j+1] < input[j]){
                swap(input[j+1] , input[j]) ; 
            }
            else{
                break ; 
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}