#include <iostream>                                                                  
#include <string>
using namespace std;

string remove_occurence( string str , string part) {
    while( str.length()> 0 && str.find(part) < str.length()){
          str.erase( str.find(part) , part.length());
    }
      return str;
}
int main() {
    string s = "gabcthkabcratabc";
    string pt = "abc";
    cout << remove_occurence( s , pt) << endl;
}