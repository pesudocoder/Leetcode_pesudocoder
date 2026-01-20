// Last updated: 1/20/2026, 10:46:39 PM
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> ans;
        map<int,int> nge;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<nums2[i]){
                st.pop();
            }
            if(st.empty()){
                nge[nums2[i]]=-1;
            }
            else{
                nge[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }
        for(int el : nums1){
            ans.push_back(nge[el]);
        }
        return ans;
    }
};