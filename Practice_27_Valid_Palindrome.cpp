// Another program to understand the famous Palindrome number question.
// Palindrome numbers = forward and backward fashion aur forward and backward values are same.
// two main things ............
// isalphanumeric function ..
// tolower function use...

#include <iostream>
#include <string>
using namespace std;
bool isalphanumeric( char ch) {
   if(( ch >= '0' && ch <= '9') || (tolower(ch) >='a' && tolower(ch) <= 'z')){
       return true;
   } 
      return false;
}


    bool palindrome_check(string s){
        int st = 0;
        int n = s.size();
        int end = n-1;
        while( st < end) {
            if( !isalphanumeric(s[st])){
                st++;
                continue;
            }
            if(!isalphanumeric(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
              st++;
              end--;
        }
          return true;
    }
int main() {
   string str = " D e c h n 3 0op";
    if(palindrome_check( str)){
        cout << " it is a valid palindrome" << endl;
    }
    else{
        cout << " not a palindrome number" << endl;
    }

    return 0;

    
}
