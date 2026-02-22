class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int capitalcount=0;

        for(int i=0;i<n;i++){
            if(isupper(word[i])){
                capitalcount++;
            }
        }
        if(capitalcount==n ||capitalcount==0 ||capitalcount==1 && isupper(word[0])){
            return true;
        }
        return false;
    }
};
