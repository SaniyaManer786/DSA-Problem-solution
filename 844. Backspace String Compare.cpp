class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char>mystack1;
       stack<char>mystack2;

       for(int i=0;i<s.length();i++){
            if(s[i]!='#'){
              mystack1.push(s[i]);  
            }else if(!empty(mystack1)){
                mystack1.pop();
            }
       }

        for(int j=0;j<t.length();j++){
            if(t[j]!='#'){
           mystack2.push(t[j]);
            }else if(!empty(mystack2)){
                 mystack2.pop();
        }
        }

       if(mystack1==mystack2){
        return true;
       }
    return false;
    }
};
