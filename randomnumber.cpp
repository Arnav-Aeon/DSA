#include <iostream>  
#include <ctime>   
using namespace std;

int main(){

    srand(time(0)); 

    for(int i = 0 ; i < 25 ; ++i){
        cout<< (rand()%6) + 1 << endl;
    
    }
}