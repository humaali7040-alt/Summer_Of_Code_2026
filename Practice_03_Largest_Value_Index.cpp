// Third Practice Program..........
// The Program is designed to print the index number of the block 
// holding largest number in an array..
#include <iostream>
using namespace std;
int main() {
    int arr[4] = {6 , 30, 9 ,2};
    int size = 4;
    int largest = INT_MIN;
    int index;

    for(int i = 0; i < size ; i++) {
      largest = max(arr[i] , largest);
       if(arr[i] == largest){
        index = i;
       }
       
    }
    
    cout << "The largest number is located at index : " << index ;
    return 0;
}
