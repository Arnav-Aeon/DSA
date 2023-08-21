#include<bits/stdc++.h>

using namespace std ;


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


void printKeypad(int num , string output = ""){
    if(num == 0){
        cout << output << endl ; 
    }

    string code = keycode(num%10) ; 
    int size = code.size(); 

    for(int i = 0 ; i < size ; ++i){
        printKeypad(num/10 , code[i] + output); 
    }
}

int main(){
    int num;
    cin >> num ; 
    printKeypad(num); 

    return 0 ; 
}