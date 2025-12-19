// Last updated: 12/19/2025, 3:25:17 PM
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=INT_MIN;
        while(low<=high){
            int div=(low+high)/2;
            if(check(nums,div)<=threshold){
                ans=div;
                high=div-1;

            }
            else low=div+1;
        }
        return ans;
        
    }
    int check(vector<int>& a, int div){
        int sum=0;
        for(int i=0;i<a.size();i++){
            sum += (a[i] + div - 1) / div;

        }
        return sum;
    }
};