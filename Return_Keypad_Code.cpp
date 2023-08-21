#include <bits/stdc++.h>

using namespace std ;

void display(string output[] , int size){
    for(int i = 0 ; i < size ; ++i){
        cout << output[i] << endl ;
    }
}

string keycode(int num){
    switch(num){
        case 2: 
        return "abc" ;
        break ; 

        case 3:
        return "def" ; 
        break ; 

        case 4: 
        return "ghi" ; 
        break ; 

        case 5:
        return "jkl" ;
        break ; 

        case 6:
        return "mno" ;
        break ; 

        case 7:
        return "pqrs" ;
        break ; 

        case 8:
        return "tuv" ;
        break ;

        case 9:
        return "wxyz" ; 
        break ; 
    }

    return "" ;
}

int keypad(int num , string output[]){
    if(num == 0){
        output[0] = "";
        return 1 ; 
    }
    int size = keypad(num/10 , output);
    int n = num%10 ; 
    string code = keycode(n);
    int codesize = code.size() ;

    
    for(int i = size ; i >= 0 ; --i){
        for(int j = codesize ; j >= 0 ; --j){
            output[i + size*j] = output[i] + code[j] ; 
        }
    }

    return size*codesize ; 
}

int main(){
    int num ; 
    cin >> num ; 

    string* output = new string[1000] ; 
    int count = keypad(num , output) ; 
    for(int i = 0 ; i < count ; ++i){
        cout << output[i] << endl ;
    }

    delete[] output ; 

    return 0 ; 
}