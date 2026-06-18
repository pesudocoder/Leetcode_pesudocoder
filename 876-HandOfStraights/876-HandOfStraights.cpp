// Last updated: 6/18/2026, 12:43:56 PM
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {

        int n = hand.size();

        if (n % groupSize != 0)
            return false;

        map<int, int> freq;

        // Count frequency of each card
        for (int card : hand)
            freq[card]++;

        while (!freq.empty()) {

            // Smallest remaining card
            int start = freq.begin()->first;

            // Try to form one group
            for (int i = 0; i < groupSize; i++) {

                int card = start + i;

                // Card doesn't exist
                if (freq.find(card) == freq.end())
                    return false;

                // Use one occurrence
                freq[card]--;

                // Remove if frequency becomes 0
                if (freq[card] == 0)
                    freq.erase(card);
            }
        }

        return true;
    }
};