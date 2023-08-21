#include<iostream>

using namespace std;

int main(){
    int num = (rand() %100);
    b1ool n = false;
    int m;
    while(n == false){
        cout<<"Write youre Guess below"<<endl;
        cin>>m;

        if(m < num){
            cout<<"You are colder"<<endl;
        }

        else if(m > num){
            cout<<"You are Hotter"<<endl;
        }

        else{
            cout<<"Great Work :)"<<endl;
            n = true;

        }
    }
}