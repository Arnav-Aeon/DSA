#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *input, int n, int val) {
  int a = 0, b = n-1, c;
  while (b-a>1) {
    c = (a + b) / 2;
    if (input[c] == val) {
      return c;
    } else if (input[c] < val) {
      a = c;
    } else {
      b = c;
    }
  }

  if(input[a] == val){
    return a;
  }
  else if(input[b]== val){
    return b;
  }

  else{
    return -1;
  }

}

int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}