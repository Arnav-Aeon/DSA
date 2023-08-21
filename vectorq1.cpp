#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    vector<int> even;
    vector<int> odd;
    int n, temp;
    cin >> n ;
    

    for(int j = 0 ; j < n ; ++j){
        cin >> temp;
        if(temp%2 == 0){
            even.push_back(temp);
        }
        else{
            odd.push_back(temp);
        }
    }

    sort(even.begin() , even.end()); // sorts the vector for us

    for(int i = 0 ; i < even.size() ; ++i){
        cout << even[i] <<endl;
    }


    return 0;
}