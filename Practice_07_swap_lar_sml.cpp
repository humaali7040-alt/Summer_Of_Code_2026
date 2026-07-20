// Another practice program 
// goal = swap the largest and minium number of array;
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
    int smallest = INT_MAX; 
     for(int i = 0 ; i < size ; i++) {
         smallest = min(arr[i] , smallest);
}
     int largest = INT_MIN; 
     for(int i = 0 ; i < size ; i++) {
         largest = max(arr[i] , largest);
     
}
cout << " the value of smallest number before swapping : " << smallest << endl;
cout << " the value of largest number before swapping : " << largest << endl;

    swap(smallest , largest);

cout << "\n the value of smallest number after swapping : " << smallest << endl;
cout << " the value of largest number after swapping : " << largest << endl;
return 0 ;
}

