// first Practice Program of DSA..
// after understanding time and space complexity i am working on Arrys ..
// GOAL : the goal is to find out the size of input array....
#include <iostream>
using namespace std;
int main() {
    int marks[] = {8 , 3, 89 , 43 ,900 , 76 ,32};
    // array is created that contain 5 different values of int data type.
    // int = 4 bytes in memory
    // total 5 values of int data type each storing 4 bytes of memory .
    // so total size of array = 5*4 = 20
    // so required size = 20 / 4 ;
    int size = sizeof(marks) / sizeof(int);
    cout << "size of marks array is " << size << endl;

}
