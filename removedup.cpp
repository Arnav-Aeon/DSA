#include <set>
#include <bits/stdc++.h>

using namespace std;

int searchdup(int arr[]  , int a , int n ){ // will return the number of dups
    int dup;
    for(int i = 0 ; i < n ; ++i){
        if(arr[i] == a){
            ++dup;
        }
        return dup;
    }
}

int removedup(int a , *arr , ){

}

int main(){
    int n , temp;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i] << endl;
    }

    for(int i = 0 ; i < n ; ++i){
        if(searchdup(arr , arr[i] , n) > 1){
            removedu
        }
        
    }
}