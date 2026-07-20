/* Another Practice Program 
Goal : Prime concern is to implement the process of insertion on an array...
*/ 
#include <iostream>
using namespace std;
void insertion_Array(int arr[] , int size , int pos , int value){
    
    // displaying the elements of array before insertion..
    cout << "\n array before insertion : " << endl;
    for(int i = 0 ; i < size ; i++) {
        cout << " element at index  " << i <<" : "  << arr[i] << endl;
    }


     cout << " size of array before insertion : " << size << endl;

     // loop for insertion
    for( int i = size-1 ; i >= pos ; i--) {
        arr[i + 1] = arr[i];
        
}
    arr[pos] = value;
    size = size + 1;
    

    cout << "\n array after insertion : " << endl;
    for(int i = 0 ; i < size ; i++) {
        cout << " element at index : " << i << " : " << arr[i] << endl;
}
  cout << " size of array after insertion : " << size << endl;
}
int main() {
    int Arr[] = { 5 , 10 ,15 ,20};
   int  size = 4;
   int value = 32;
   int pos = 2;
   
   insertion_Array( Arr , size, pos ,value) ;
   return 0;

    


}

