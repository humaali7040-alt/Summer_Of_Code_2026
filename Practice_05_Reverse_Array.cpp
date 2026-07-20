/* Another Practice Program 
GOAL : in this program we are going to reverse the array using 2 D Pointers approach...
*/
#include <iostream>
using namespace std;
// function declaration and definition.......
  void Reversearray( int arr[] , int start , int end){

    while(start < end) {
        swap(arr[start] , arr[end]);
        start++;
        end--;
     }
      
     }
int main() {
    int arr []= { 4 , 2 , 7 , 9};
    int size = 4;
    int start = 0;
    int end = size -1;
      
    Reversearray(arr , start , end);
    for(int i =0 ; i < size ; i++) {
      cout << arr[i] << " " ;
    }
    return 0;
}

