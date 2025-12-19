// Last updated: 12/19/2025, 3:25:33 PM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,char>m1;
        map<char,char>m2;
        for (int i = 0; i < s.size(); i++) {
        char a = s[i];
        char b = t[i];

        // If mapping from s already exists
        if (m1.find(a) != m1.end()) {
            if (m1[a] != b) return false; // mapping contradicts
        } 
        // If mapping from t already exists (reverse check)
        else if (m2.find(b) != m2.end()) {
            if (m2[b] != a) return false; // reverse mapping contradicts
        } 
        
        // Create new mappings
        m1[a] = b;
        m2[b] = a;
    }

    return true;
        
        
    }
};