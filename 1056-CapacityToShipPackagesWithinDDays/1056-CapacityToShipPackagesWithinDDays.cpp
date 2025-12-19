// Last updated: 12/19/2025, 3:25:20 PM
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        long long high=accumulate(weights.begin(),weights.end(),0LL);
        int ans=-1;
        while(low<=high){
            int cap=(low+high)/2;
            if(daysreq(weights,cap)<=days){
                ans=cap;
                high=cap-1;

            }
            else{
                low=cap+1;
            }
        }
        return ans;
        
    }
    int daysreq(vector<int> &a,int cap){
        int day=1,load=0;
        for(int i=0;i<a.size();i++){
            if((a[i]+load)>cap){
                day=day+1;
                load=a[i];
            }
            else load+=a[i];
        }
        return day;
    }
};