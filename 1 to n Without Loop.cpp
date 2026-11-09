class Solution {
  public:
    void printTillN(int n) {
        printNumbers(1, n);
    }

    void printNumbers(int i, int n) {
        // Base condition
        if (i > n) {
            return;
        }

        cout << i << " ";

        // Recursive call
        printNumbers(i + 1, n);
    }
};
