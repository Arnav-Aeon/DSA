#include <bits/stdc++.h>
#include <vector>
using namespace std ;

void printSubsetsOfArray(int input[] , int size , string output = "" ){

    if(size == 0){
        cout << output << endl ;
        return ;
    }
    printSubsetsOfArray(input , size-1 , output) ; 
    int element = input[size - 1] ; 
    string temp = ""; 
    while(element){
        temp = char(element%10 + 48) + temp ;
        element = element/10 ;
    }
    output = temp + " " + output ; 
    printSubsetsOfArray(input , size-1 , output) ;
}

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
