#include<iostream>
#include<cstring>
using namespace std;

void minLengthWord(char input[], char output[]){
    int i = 0 , x = 0 , x_min , count = 0 , min = INT_MAX;
    int size = strlen(input) ; 
    while(i<size){
        if(input[i] == ' '){
            if(count < min){
                min = count ; 
                if (x==0) x_min = x ;
                else x_min = x+1; 

            }
            count = 0 ;
            x = i ; 
            i++ ; 
            continue;
        }

        count++; 
        i++ ; 
    }
    if(count < min){
        min = count ; 
        x_min = x+1; 
    }
    i = 0 ; 
    while(input[x_min] != ' '){
        output[i] = input[x_min] ; 
        x_min++ ; 
        i++;
    }
}




int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}
