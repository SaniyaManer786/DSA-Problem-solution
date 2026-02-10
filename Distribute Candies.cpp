//better approach

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n1=candyType.size();
        sort(candyType.begin(),candyType.end());
        candyType.erase(unique(candyType.begin(),candyType.end()),candyType.end());
        int unique=candyType.size();
        int maxeat=n1/2;
    
           return min(unique,maxeat);
            }
};

//optimal apporach
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> uniqueTypes(candyType.begin(), candyType.end());
        
        return min((int)uniqueTypes.size(), (int)candyType.size()/2);
    }
};
