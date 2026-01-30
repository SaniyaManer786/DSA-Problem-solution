class Solution {
public:
    void reverseString(vector<char>& str) {
        int n=str.size();
        int st=0;
        int end=n-1;
        while(st<end){
            swap(str[st],str[end]);
            st++;
            end--;
        }
    }
};
