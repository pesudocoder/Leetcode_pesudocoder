// Last updated: 6/15/2026, 2:58:52 PM
class Solution {
public:
    int f(int n){
        int cnt = 0 ;
        while(n!=0){
            n=(n&(n-1));
            cnt++;
        }
        return cnt;
    }
    int minBitFlips(int start, int goal) {
        int x = start^goal;
        return f(x);
        
    }
};