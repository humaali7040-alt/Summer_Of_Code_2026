#include <iostream>
using namespace std;
 void Bubble_Sort(int arr[] , int size) {
    // two loops chale gaii
    // adjacent elements compare 
    // after every pass larger element moves to end of array
    for(int i = 0; i < size -1 ; i++) { // it is only used to trigger inner loop 
        for( int j = 0; j < size-i-1 ; j++) {
             if(arr[j] > arr[j+1]){
                swap( arr[j] , arr[j+1]);
             }
        }
    }
 }
  void print(int arr[] , int size){
    cout << "\n The array after sorting : " << endl;
    for ( int i = 0; i < size ;i++){
        cout << arr[i]<< " ";
    }
  }
  int main() {
    int ARR[] = {4, 8 ,9 ,3 ,2};
    int size =5;
    Bubble_Sort(ARR, size);
    print( ARR , size);
    return 0;
  }