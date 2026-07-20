#include <iostream>
using namespace std;
void delete_Array(int arr[] , int size , int pos ){
    if(pos<0 || pos>=size) {
        cout << "invalid position of an array" << endl;
    }
       return;
    
    // displaying the elements of array before deletion..
    cout << "\n array before deletion : " << endl;
    for(int i = 0 ; i < size ; i++) {
        cout << " element at index  " << i <<" : "  << arr[i] << endl;
    }


     cout << " size of array after deletion : " << size << endl;

     // loop for deletion
    for( int i = pos ; i < size-1 ; i++) {
        arr[i] = arr[i +1];
        
}
    
    size = size - 1;
    

    cout << "\n array after deletion : " << endl;
    for(int i = 0 ; i < size ; i++) {
        cout << " element at index : " << i << " : " << arr[i] << endl;
}
  cout << " size of array after deletion : " << size << endl;
}
int main() {
    int Arr[] = { 5 , 10 ,15 ,20};
   int  size = 4;
   
   int pos = 1;
   
   delete_Array( Arr , size, pos) ;
   return 0;
}
    

