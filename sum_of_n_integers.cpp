#include<bits/stdc++.h>

using namespace std ; 

int main() {
    int n ; 
    cin >> n ; 
    int sum = 0 ;
	while(n){
		if(n % 2 == 0){
            sum += n;
        } 
        cout << n % 2 << endl; 
        n--;
	}
	cout << sum << endl;
    return 0 ; 

}