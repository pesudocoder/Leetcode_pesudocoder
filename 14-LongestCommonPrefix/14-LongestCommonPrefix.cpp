// Last updated: 12/19/2025, 3:25:57 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string prefix=strs[0];
       int n=strs.size();
       for(int i=1;i<n;i++){
        int j=0;
        while(j<prefix.size()&& j<strs[i].size()&& prefix[j]==strs[i][j])
        {
            j++;
        }
        prefix=prefix.substr(0,j);
        if(prefix=="") return "";
       }
       return prefix;
        
    }
};