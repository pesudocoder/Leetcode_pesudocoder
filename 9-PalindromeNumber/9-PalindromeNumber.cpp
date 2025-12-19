// Last updated: 12/19/2025, 3:26:00 PM
class Solution {
public:
    bool isPalindrome(int x) {
         long long rev=0;
    int dup=x;
    while(x>0){
        int ld = x%10;
        rev=rev*10+ld;
        x=x/10;
    }
    if (rev==dup) return true;
    else return false;
    }
};