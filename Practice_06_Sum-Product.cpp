// Another practice based program ..
// we are going to add and multiply all values stored in an array..
#include <iostream>
using namespace std;
void Sum(int num[] , int size) {
    int sum = 0;
    for( int i =0 ; i < size ; i++) {
          sum = sum + num[i];
    }
    cout << " the sum of all values in array is : " << sum << endl;
}
void product(int arr[] , int size) {
    int product = 1;
     for( int i =0 ; i < size ; i++) {
          product = product * arr[i];
    }
    cout << " the product of all values in array is : " << product << endl;
}


int main() {
    int arr[] = { 4 , 9 ,7 ,2 ,4 ,6};
    Sum(arr , 6);
    product(arr , 6);
    return 0;
}