// Last updated: 12/19/2025, 3:25:18 PM
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
    int depth = 0;

    for (char c : s) {
        if (c == '(') {
            if (depth > 0) ans.push_back(c); // not the outermost
            depth++;
        } else { // c == ')'
            depth--;
            if (depth > 0) ans.push_back(c); // not the outermost
        }
    }

    return ans;
        
    }
};