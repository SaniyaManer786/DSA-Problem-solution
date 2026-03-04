class Solution {
public:
  bool isalpha(char ch){
    return (ch>='a' && ch<='z') || (ch>='A' && ch<='Z');

}
     
    string reverseOnlyLetters(string s) {
        int n=s.length();
       int i=0;
       int j=n-1;
        while(i<j){
        while(i<j && !isalpha(s[i])){
            i++;
           
        }
        while(i <j && !isalpha(s[j])){
             j--;
          
       }
         swap(s[i],s[j]);
         i++;
         j--;
    }
       return s;
    }
};
