#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input) {
    string output ;
    int i = 0 ;
    char c = '/';
    int count = 1 ;
    for(auto it = input.begin() ; it != input.end() ; ++it){
        
        if(*it == c){
            count++ ;
        }
        
        else{
            if(count > 1) output.push_back(48+count);
            output.push_back(*it);
            count = 1 ;

        }
        c = *it ;
    }
    if(count > 1) output.push_back(48+count);
    return output;
}

int main() {
    int size = 1e6;
    string str;
    cin >> str ; 
    str = getCompressedString(str);
    cout << str << endl;
}