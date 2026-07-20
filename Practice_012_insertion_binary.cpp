#include <iostream>
using namespace std;
// declaring and defining a function ..
int Binary_Search( int arr[] , int target , int size){
    int start = 0;
    int end = size -1;
    // while loop because we dont know how many iterations will be conducted
    while(start <= end){ // in worst case our start becomes equal to end...
     // First step in binary search is find out mid index of an array and its value 
       int mid = start + (end - start)/2 ;
       // in order to avoid overflow we are using this  formula instead of basic formula
       //  mid = start + end/2;
       // checking three basic conditions
       if(target > arr[mid]){ // 
          start = mid +1;
       }
          else if(target < arr[mid]){
         end = mid-1;
       }
       else{
        return mid ; // means target == mid value .. so return mid ..
       }
    }
       return start; // means k target is not valid ie it is not located in array

}
int main() {
    int nums[] = { 1 , 3 , 5 , 6};
    int target = 7;
    int size = 6;
    
    cout << Binary_Search( nums , target , size) << endl;
    return 0;
}
