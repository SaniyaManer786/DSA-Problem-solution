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
