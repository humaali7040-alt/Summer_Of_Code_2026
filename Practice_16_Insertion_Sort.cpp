#include <iostream>
using namespace std;
void Insertionsort( int arr[] , int size){
    // starting the core logic ............
    for(int i = 1; i < size;i++) {
        int key = arr[i];
        int j = i-1;
          while( j>= 0 && arr[j] > key) {
             arr[j+1] = arr[j];
                   j--;
          }
          arr[j+1] = key;
    
}
}
void print( int arr[] , int size) {
    for( int i =0; i < size ; i++){
        cout << arr[i] << " ";
}
}
int main() {
    int nums[] = {2 , 7, 5 ,6 , 3 , 9};
    int size = 6;
    Insertionsort(nums , size);
    print( nums , size);
    return 0;
}