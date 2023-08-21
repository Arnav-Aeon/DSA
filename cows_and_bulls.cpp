#include<iostream>
#include<cmath>

using namespace std;


int main(){
    int num;
    bool n = true;
    int user_num[4];
    for(int i =0){

    while(n==true){
        cout<<"Enter youre guess"<<endl;
        cin>>num;
        
        for(int i = 0; i<4 ; ++i){
            user_num[i] = num %10;
            num = floor(num/10);
        }

        
    }       
}