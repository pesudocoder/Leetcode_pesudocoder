// Last updated: 6/18/2026, 12:44:01 PM
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26,0);
        priority_queue<int> pq;
        for(char ch : tasks){
            mp[ch-'A']++;
        }
        for(int i =0;i<26;i++){
            if(mp[i]>0) pq.push(mp[i]);
        }
        int time = 0;

        while(!pq.empty()) {

            vector<int> temp;

            int cycle = n + 1;

            while(cycle > 0) {

                if(!pq.empty()) {

                    int freq = pq.top();
                    pq.pop();

                    freq--;

                    if(freq > 0)
                        temp.push_back(freq);
                }

                time++;
                cycle--;

                if(pq.empty() && temp.empty())
                    break;
            }

            for(int x : temp)
                pq.push(x);
        }

        return time;
        
    }
};