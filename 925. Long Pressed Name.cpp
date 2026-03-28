class Solution {
public:
    bool isLongPressedName(string name, string typed) {
      
       int n=name.size();
      int j=0;
      int i=0;
   while(j<typed.size()){
        if(i < name.size() && name[i]==typed[j]){
            i++;
            j++;
        }
        else if(j > 0  &&typed[j]==typed[j-1]){
        j++;
        }else{
            return false;
        }
        } 
        return i == name.size(); 
    }
};
