
#include <iostream>
#include <stack>
using namespace std;

void calculateSpan(int *prices , int n , int *spans){
    stack<int> s ;
    s.push(prices[0]) ; 
    spans[0] = 1 ;
    for(int i = 1 ; i < n ; ++i){
        int count = 1 ;
        int temp = i - 1 ; 
        while(!s.empty() && prices[i] > s.top()){
            s.pop() ; 
            count += spans[temp]; 
            temp -= spans[temp] ; 
        }
        spans[i] = count ; 
        s.push(prices[i]) ; 
        
    }
}

int main() {
    int n;
    cin >> n;

    int* prices = new int[n];
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    int* spans = new int[n];
    calculateSpan(prices, n, spans);

    for (int i = 0; i < n; i++)
        cout << spans[i] << " ";

    delete[] prices;
    delete[] spans;

    return 0;
}