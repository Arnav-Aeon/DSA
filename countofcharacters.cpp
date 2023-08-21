    #include<bits/stdc++.h>

    using namespace std ; 

    int main() {
        char c ; 
        int count_digit= 0 , count_char = 0 , count_space = 0 ; 
        c = cin.get() ; 
        while(c != '$'){
            if(int(c) >= 48 && int(c) <= 57) count_digit++ ;
            else if(int(c) >= 97 && int(c) <= 122) count_char++ ; 
            else if(c == '\n'|| c == '\t' || c == ' ') count_space++ ; 
            c = cin.get() ; 
        }
        cout << count_char << " " << count_digit << " " << count_space ; 
        return 0 ;
    }