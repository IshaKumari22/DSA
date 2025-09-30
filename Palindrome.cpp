// #include <iostream>
// #include <algorithm>
// #include <cctype>   // for tolower()
// #include <string>   // for string class
// using namespace std;

// class Solution {
// public:
//     bool isAlphaNum(char ch) {
//         if ((ch >= '0' && ch <= '9') || 
//             (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
//             return true;
//         }
//         return false;
//     }

//     bool isPalindrome(string s) {
//         int st = 0, end = s.length() - 1;
//         while (st < end) {
//             if (!isAlphaNum(s[st])) {
//                 st++;
//                 continue;
//             }
//             if (!isAlphaNum(s[end])) {
//                 end--;
//                 continue;
//             }
//             if (tolower(s[st]) != tolower(s[end])) {
//                 return false;
//             }
//             st++;
//             end--;
//         }
//         return true;
//     }
// };

// int main() {
//     Solution sol;
//     string s;
//     cout << "Enter a string: ";
//     getline(cin, s);   // input string with spaces
//     if (sol.isPalindrome(s))
//         cout << "Palindrome " << endl;
//     else
//         cout << "Not a palindrome ❌" << endl;
//     return 0;
// }




// 21st sep

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution{
 public:
    bool isAlphaNum(char ch){
        if((ch>='0' && ch<='9')||
         (tolower(ch)>='a'  && tolower(ch)<='z')){
        return true;
    }
    return false;
  }
   bool isPalindrome(string s){
        int st=0,end=s.length()-1;
        while(st<end){
            if(!isAlphaNum(s[st])){
                st++;continue;
            }
            if(!isAlphaNum(s[end])){
                end--;continue;
            }
            if(tolower(s[st])!=tolower(s[end])){
                return false;
            }
            st++;end--;
        }
        return true;
   }
    
};
int main(){
    Solution sol;
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    if(sol.isPalindrome(s))
    {
        cout<<"Palindrome\n";
    }else{
        cout<<"Not a Palindrome\n";
    }
    return 0;
}