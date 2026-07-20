/* Another Practice program 
GOAL : the objective is to understand the two pointers appraoch by finding two sum in an array*/
  
#include <iostream>
using namespace std;
 void Two_sum(int arr[] , int target , int size) {
    int current_sum = 0;
    int start = 0;
    int end = size -1;
    // main loop is being started ... 
    while(start < end) { // the loop will run until the start is less than end cuz if start == end then 
    // end and start will have same values but we want distinct pairs of values whose sum will become
    // equal to our desired target...
    // finalizing three main conditions 
     current_sum = arr[start] + arr[end];
    if(current_sum == target) {
        cout << " start is : " << start ;
        cout << " end is : " << end;
        return;
    }
    else if(current_sum < target){
        start ++;
    }
    else {
        end --;
    }
}
   cout << " invalid target "<< endl;
};

int main() {
    int nums[] = {1 , 3 ,5 , 7 , 9 , 11 , 15};
    int target = 10;
    int size = 7;
     Two_sum( nums , target , size);
    return 0;
}