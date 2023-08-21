#include <bits/stdc++.h>

using namespace std;

int main(){
    int k ; //0-based index of the item Anna refuses to eat
    int n ; //total no of items
    cin >> n ; 
    cin >> k ; 
    vector<int> bill;
    int t;

    for(int i = 0 ; i < n ; ++i){
        cin >> t;
        bill.push_back(t);
        
    }

    //sum 
    int sum = 0     ;
    for(auto it = bill.begin() ; it!= bill.end() ; ++it){
        sum += *it;
    }
 
    int actual_pay = (sum - bill[k])/2;
    int anna_pay ;
    cin >> anna_pay ;

    if(actual_pay == anna_pay){
        cout << "Bon Appetit";
    }

    else{
        cout << anna_pay - actual_pay ; 
    }

    return 0;
    
}