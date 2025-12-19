// Last updated: 12/19/2025, 3:25:28 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>m1(26,0);//for s
        vector<int>m2(26,0);//for t
        if(s.size()!=t.size()) return false;
        for(char ch : s){
            m1[ch-'a']++;
        }
        for(char ch : t){
            m2[ch-'a']++;
        }
        for(char ch:s){
            if(m1[ch-'a']!=m2[ch-'a']) return false;
        }
        
        return true;
    }
};