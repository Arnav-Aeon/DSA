#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,t , l = 0 , l_max = 0 ;
    cin >> n ;
    int no_of_sock[n] = {0};

    for(int i = 0 ; i < 2*n ; ++i){
        
        l++;
        cin >> t ; 
        no_of_sock[t-1]++ ;

        if(no_of_sock[t-1] == 2){
            l -= 2;
        }

        if(l_max < l){
            l_max = l ;
        }
        
    }
    cout << l_max ; 
    return 0 ;
}