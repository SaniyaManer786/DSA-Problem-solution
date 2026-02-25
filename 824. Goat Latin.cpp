class Solution {
public:
    string toGoatLatin(string sentence) {
       unordered_set<char>vowels={
        'a','e','i','o','u',
       'A','E','I','O','U'
    };
    stringstream ss(sentence);
    string result;
    int index=1;
    
    while(ss >> word){
        if(vowels.count(word[0])){
            word+='maa';
        }else{
            word=word.substr(1)+word[0]+'ma';
        }
        word+=string(index,'a');
        result+=word+" ";
        idex++;
    }
    if(!result.empty()){
        result.pop_back();
    }
        return result;
    }
};
