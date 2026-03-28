#include <string>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        // If they don't form the same pattern, no answer
        if (str1 + str2 != str2 + str1)
            return "";
        
        // Compute GCD of lengths
        int len = gcd(str1.length(), str2.length());
        
        // Return the common base string
        return str1.substr(0, len);
    }

private:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};
