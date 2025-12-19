// Last updated: 12/19/2025, 3:25:19 PM
class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        return fib(n-1) + fib(n-2);
        
    }
};