// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.
// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
#include <iostream>
#include <cctype>
class solution{
     public:
      bool isPalindrome(std::string s) {
        std::string str="";
        for(char c : s){
            if(isalnum(c)){
                str += tolower(c);
            }
        }
        int start=0;
        int end=str.size()-1;
        while(start<end){
            
            if(str[start]!=str[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
     
};
int main(){
    solution s1;
    std::string mystring="A man, a plan, a canal: Panama";
    if(s1.isPalindrome(mystring)){
        std::cout<<"my String 'A man, a plan, a canal: Panama' is a Palindrom!"<<std::endl;
    }else{
        std::cout<<"my String 'A man, a plan, a canal: Panama' is not Palindrom!"<<std::endl;
    }
    return 0;
}