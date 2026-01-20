// Last updated: 1/20/2026, 10:46:33 PM
class Solution {
public:
    vector<int> PSE(vector<int>& arr){
        int n=arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]> arr[i]){
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> NSE(vector<int>& arr){
        int n=arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>= arr[i]){
                st.pop();
            }
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }
    
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9 + 7;
    int n = arr.size();

    vector<int> pse = PSE(arr);
    vector<int> nse = NSE(arr);

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        long long left  = i - pse[i];
        long long right = nse[i] - i;

        sum = (sum + arr[i] * left % MOD * right % MOD) % MOD;
    }

    return sum;
        
    }
};