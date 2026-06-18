// Last updated: 6/18/2026, 12:43:46 PM
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ls = 0 ;
        for(int i = 0 ; i<k;i++){
            ls+=cardPoints[i];
        }
        int maxsum =ls;
        int ri =cardPoints.size()-1;
        int rs =0;
        for(int i =k-1;i>=0;i--){
            ls=ls-cardPoints[i];
            rs+=cardPoints[ri];
            ri--;
            maxsum=max(maxsum,ls+rs);
            
        }
        return maxsum;
        
    }
};