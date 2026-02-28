class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int bitA = 0, bitB = 0;

            if (i >= 0) bitA = a[i--] - '0';
            if (j >= 0) bitB = b[j--] - '0';

            // XOR logic (sum without carry)
            int sum = bitA ^ bitB ^ carry;

            // AND logic to calculate new carry
            carry = (bitA & bitB) | (carry & (bitA ^ bitB));

            result = char(sum + '0') + result;
        }

        return result;
    }
};
