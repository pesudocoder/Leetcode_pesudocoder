// Last updated: 12/19/2025, 3:25:10 PM
class Solution {

public:
    static const long long MOD = 1e9 + 7;

    long long modPow(long long x, long long n) {
        long long ans = 1;
        while (n > 0) {
            if (n % 2) ans = (ans * x) % MOD;
            x = (x * x) % MOD;
            n /= 2;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long evenCount = (n + 1) / 2;
        long long oddCount = n / 2;

        long long evens = modPow(5, evenCount);
        long long odds  = modPow(4, oddCount);

        return (evens * odds) % MOD;
    }
};

        
