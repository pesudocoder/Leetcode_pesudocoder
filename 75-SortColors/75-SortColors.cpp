// Last updated: 12/19/2025, 3:25:47 PM
class Solution {
public:
    void sortColors(vector<int>& a) {
        int low=0, mid=0;
        int n=a.size();
        int high=n-1;
        while(mid<=high){
            if(a[mid]==0){
                swap(a[low],a[mid]);
                low++;
                mid++;
            }
            else if(a[mid]==1) mid++;

            else{
                swap(a[mid],a[high]);
                high--;
            }
        }
        
    }
};