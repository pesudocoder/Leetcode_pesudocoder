// Last updated: 12/19/2025, 3:25:59 PM
class Solution {
public:
    int romanToInt(string s) {
        vector<int> map(256,0);
        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;
        int ans= 0;
        for (int i = 0; i < s.size(); ++i) {
        int cur = map[s[i]];
        if (i+1 < s.size() && cur < map[s[i+1]]) ans -= cur;
        else ans += cur;
        }
        return ans;
        

    }
};