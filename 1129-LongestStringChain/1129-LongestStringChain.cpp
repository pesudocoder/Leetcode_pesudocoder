// Last updated: 6/15/2026, 2:58:57 PM
class Solution {
public:

    static bool comp(string &a, string &b){
        return a.size() < b.size();
    }

    bool isPred(string& s1, string& s2){

        if(s1.size() + 1 != s2.size())
            return false;

        int i = 0;
        int j = 0;

        while(j < s2.size()){

            if(i < s1.size() && s1[i] == s2[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }

        return i == s1.size();
    }

    int longestStrChain(vector<string>& words) {

        int n = words.size();

        sort(words.begin(), words.end(), comp);

        vector<int> dp(n,1);

        int maxi = 1;

        for(int i=0;i<n;i++){

            for(int j=0;j<i;j++){

                if(isPred(words[j], words[i]) &&
                   dp[j] + 1 > dp[i]){

                    dp[i] = dp[j] + 1;
                }
            }

            maxi = max(maxi, dp[i]);
        }

        return maxi;
    }
};