/* Practice Program for arrays in DSA
GOAL : The goal is to understand the algorithm of linear search.
linear search is a searching algorithm where each value is checked and then matched by required target.
*/
#include <iostream>
using namespace std;
// function definition...
int  Linear_search(int arr[] , int size , int target){
     for(int i = 0 ; i < size ; i++) {
        if(arr[i] == target){ // 
            return i;
        }
    }
            return -1;
        
     
}
int main() {
    int Arr[] = {6, 12 , 32, 45 ,67};
    
    Linear_search(Arr , 5 , 45);
    
    cout << " our target is located at index : " << Linear_search(Arr , 5 ,45) << endl;

    return 0;

}