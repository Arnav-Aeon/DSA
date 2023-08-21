#include<iostream>

using namespace std;

int main(){
    int n ;
    cin >> n;
    int i , j;
    for(int i = 1 ; i < n+1 ; ++i){
        cout << i;
        for(int j = i+1 ; j - i < i ; ++j){
            cout << j;
        }
        cout << endl;
    }
}