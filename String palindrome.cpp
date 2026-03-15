#include <iostream>
#include<string>
#include <algorithm> 
using namespace std;
int main()
{
 
 string str1;
 cin>>str1;
 
 string str=str1;
 reverse(str.begin(),str.end());
 if(str1==str){
     cout<<"string is palindrome"<<endl;
 }else{
    cout<<"string is not palindrome"<<endl;
 }
 
    return 0;
}



// using bool function
#include <iostream>
#include<string>
#include <algorithm> 
using namespace std;
bool isplaindrome(string str1){
    string str2=str1;
    reverse(str2.begin(),str2.end());
    if(str2==str1){
    return true;
    }else{
        return false;
    }
}
int main()
{
 string str1;
 cin>>str1;
 cout<<isplaindrome(str1)<<endl;
 return 0;

}



// string include nonalphanumeric charector
class Solution {
public:
    bool isAlphaNum(char ch) {
        if ((ch >= '0' && ch <= '9') || 
            (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int st = 0;
        int end = s.length() - 1;

        while (st < end) {
            if (!isAlphaNum(s[st])) {
                st++;
                continue;
            }
            if (!isAlphaNum(s[end])) {
                end--;
                continue;
            }

            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }

            st++;
            end--;
        }
        return true;
    }
};

