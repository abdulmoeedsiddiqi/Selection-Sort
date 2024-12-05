#include<iostream>
#include<string.h>
using namespace std;
void show(int arr[] , int n ){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl ; 
}
void selectionSort(int arr[] , int n){
     
     for( int i = 0 ; i < n - 1 ; i++){
        int minIdx = i ; 
        for( int j = i + 1 ; j < n ; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j ;
            }
        }
        swap(arr[i] , arr[minIdx]);
    }
}
int main()
{
    int arr[] = { 9,3,6,4,2,7} ; 
    int n = sizeof(arr) / sizeof(arr[0]) ; 
    show(arr, n);
    selectionSort(arr , n ) ; 
    show(arr, n);
    return 0;
}