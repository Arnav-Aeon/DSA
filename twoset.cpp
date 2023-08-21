#include<bits/stdc++.h>

using namespace std;

int getMax(vector<int> a){
    int max = *a.begin();
    for(auto it = a.begin() ; it != a.end() ; ++it){
        if(max < *it){
            max = *it;
        }
    }
    return max;
}

int getMin(vector<int> a){
    int min = *a.begin();
    for(auto it = a.begin() ; it != a.end() ; ++it){
        if(min > *it){
            min = *it;
        }
    }
    return min;
}

int getTotalX(vector<int> a, vector<int> b) {
    vector<int> c; 
    int min = getMin(b);
    int max = getMax(a) , temp = max;
    
    bool val_1 = true;
    while(temp <= min){
        for(auto it = a.begin() ; it != a.end() ; it++){
            if(temp%(*it) != 0){
                val_1 = false;
                break;
            }
        }
        if(val_1 == true){
            c.push_back(temp);
        }
        temp += max;
        val_1 = true;
    }
    
    int total = 0 ; 
    bool val_2 = true;
    for(auto it = c.begin() ; it != c.end() ; ++it){
        for(auto jt = b.begin() ; jt!= b.end() ; ++jt){
            
            if((*jt)%(*it)!=0){
                val_2 = false;
                break;
            }
        }
        if(val_2 == true){
            total++;
        }
        val_2 = true ;
    }
    return total;
}

int main(){ 
    vector<int> a;
    vector<int> b;
    int n , m , temp;
    cin >> n >> m;

    for(int i = 0 ; i < n ; ++i){
        cin >> temp ;
        a.push_back(temp);
    }

    for(int i = 0 ; i < m ; ++i){
        cin >> temp;
        b.push_back(temp);
    }
    
    cout << getTotalX(a , b);
}