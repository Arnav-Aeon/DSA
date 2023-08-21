#include<iostream>

using namespace std;

int main(){
    int term;
    cout<<"Enter the Number of terms to be entered "<<endl;
    cin>>term;
    int num[term];
    num[0] = 1;
    num[1] = 1;

    for(int i=2 ; i < term ; ++i){
        num[i] = num[i-1]+num[i-2];

    }

    for(int i=0 ; i < term ; ++i){
        cout<<num[i]<<endl;

    }


    return 0;
}   