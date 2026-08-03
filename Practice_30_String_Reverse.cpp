// how to reverse a given string
// first of all reverse the whole string in usual manner like by swapping start and end pointer
// then again reversing each word of string indiviually like swap each character of a word
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string reversestring( string s) {
    int n = s.length();
    string ans = "";
    reverse( s.begin() , s.end());

    for( int i = 0; i < n; i++) {
        string word = "";

        while( i < n && s[i] != ' ') {
            word = word + s[i];
            i++;
        }
        reverse( word.begin() , word.end());
        if( word.length() > 0){
            ans = ans + " " + word;
        }
    }
       return ans.substr(1);
}
int main() {
    string str = "I love you";
    cout << reversestring(str) << endl;
    return 0;
}