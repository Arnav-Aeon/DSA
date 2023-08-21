#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int array[4];
    int num = 2436;

    for(int i = 0; i < 4; ++i){
        array[i] = num % 10;
        num = floor(num/10);
    }

    for(int r=0 ; r <4 ; ++r){
        cout<<array[r]<<endl;

    }
    return 0;
}
