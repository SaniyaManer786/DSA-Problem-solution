

// by reverse function
class Solution {
public:
    void reverseString(vector<char>& str) {
        int n=str.size();
        reverse(str.begin(),str.end());

    }
};


// by swaping approach
class Solution {
public:
    void reverseString(vector<char>& str) {
        int n=str.size();
        // reverse(str.begin(),str.end());
         int st=0;
         int end=n-1;

         while(st<end){
            swap(str[st],str[end]);
            st++;
            end--;
         }
    }
};
