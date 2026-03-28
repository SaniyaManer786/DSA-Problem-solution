class Solution {
public:

    int numJewelsInStones(string jewels, string stones) {
           int count=0;

           vector<int>freq(128,0);

           for(char c: jewels){
            freq[c]++;
           }
          
        for(int i = 0; i < stones.size(); i++){
                if(freq[stones[i]]==1){
                    count++;
                }
            }
            return count;
    }
};
