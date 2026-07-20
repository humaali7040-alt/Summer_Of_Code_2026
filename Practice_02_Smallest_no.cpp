/*  Another Practice Program including arrays 
GOAL = The goal is to identify smallest numbers in an array*/
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int size = 5;
    // for loop to input values for array...
    for(int i = 0 ; i < size ; i++) {
        cout << " enter value : " << endl; // loop iterates from 0 to size-1;
        cin>> arr[i];
    }
    int smallest = INT_MAX; // +infinity in order to detect the smallest number we must have to compare 
    // two numbers so min is starting number with whom others will be compared..
    // another for loop to check the smallest number in an array
     for(int i = 0 ; i < size ; i++) {
         smallest = min(arr[i] , smallest);
}
     cout << " smallest number in array is : " << smallest << endl;
     return 0;
}