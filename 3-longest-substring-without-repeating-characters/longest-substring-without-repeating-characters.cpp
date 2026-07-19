class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int maxCount = 0,
            next_indx = 0,
            previous_indx = 0;

        unordered_map<char, int> freq;

        while(next_indx < s.size()){

            freq[s[next_indx]]++;
            next_indx++;

            while(next_indx - previous_indx > freq.size()){

                char c = s[previous_indx];
                
                if(--freq[c] == 0){
                    freq.erase(c);
                }

                previous_indx++;
            }

            maxCount = max(maxCount, next_indx - previous_indx);
        }

        return maxCount;
    }
};