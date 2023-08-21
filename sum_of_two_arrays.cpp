#include <iostream>
using namespace std;

#include<bits/stdc++.h>

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output){
    int carry = 0 ; 
	for(int i = 0 ; i < max(size1 , size2)+1 ; ++i){
		output[i] = 0 ; 
	}
    if(size1 >= size2){
        for(int i = 1 ; i <= size2 ;i++){
            output[size1 - i + 1] = input1[size1 - i] + input2[size2 - i]+ carry;   
            carry = 0 ; 
            if(output[size1 - i + 1] > 9){
                output[size1 - i +1] -= 10 ; 
                carry = 1;
            }   
        }
        for(int i = size2+1 ; i <= size1 ; ++i){
            output[size1 -i + 1] = input1[size1 - i] + carry ;
            carry = 0 ; 
        }

		
    }
    else{
        for(int i = 1 ; i <= size1 ;i++){
            output[size2 - i + 1] = input1[size1 - i] + input2[size2 - i]+ carry;   
            carry = 0 ; 
            if(output[size2 - i + 1] > 9){
                output[size2 - i +1] -= 10 ; 
                carry = 1;
            }   
        }
        for(int i = size1+1 ; i <= size2 ; ++i){
            output[size2 -i + 1] = input2[size2 - i] + carry ;
            carry = 0 ; 
        }
		
    }

	output[0] = carry ; 
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}

	return 0;
}