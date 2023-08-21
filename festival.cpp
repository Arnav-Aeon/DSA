#include <bits/stdc++.h>

using namespace std;

int main(){
   int n;
   cin >> n; 
   
   vector<pair<int, int>> p ;
   int a , b;
   for(int i = 0 ; i < n ; ++i)
   {
       cin >> a >> b;
       p.push_back({a , b});
   }
   sort(p.begin() , p.end());
   int arr[n] = {0};
   
}