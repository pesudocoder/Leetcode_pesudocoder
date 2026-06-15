// Last updated: 6/15/2026, 2:59:22 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n>0 && ((n&(n-1))==0));
        
    }
};