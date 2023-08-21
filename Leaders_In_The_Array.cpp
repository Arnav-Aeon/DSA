#include<iostream>
#include<climits>
using namespace std;


void Leaders(int* arr,int len)
{
    int leaders[len] ; 
    bool t ; 
    for(int i = 0 ; i < len ; ++i){
        t = true ;
        for(int j = i+1 ; j < len ;++j){
            if(arr[j] > arr[i]){
                t = false ; 
                break; 
            }
        }

        if(t = true){
            cout << arr[i] << ' ' ;
        }
    }
}

int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];
	
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}
