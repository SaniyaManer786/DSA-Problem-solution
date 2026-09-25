class Solution {
    public long find_fact(int n) {
        // Code here
        int i=1;
        long fact=1;
        while(i<=n){
            fact=fact*i;
            i++;
            
        }
        return fact;
    }
}
