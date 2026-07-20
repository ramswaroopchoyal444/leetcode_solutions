class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int maxCount = 0,
            maxfreq = 0,
            next_indx = 0,
            previous_indx = 0;


        unordered_map<char, int> freq;

        while(next_indx < s.size()){

            maxfreq = max(maxfreq, ++freq[s[next_indx]]);

            next_indx++;

            while((next_indx-previous_indx) - maxfreq > k){

                freq[s[previous_indx]]--;

                previous_indx++;
            }

            maxCount = max(maxCount, next_indx - previous_indx);

        }

        return maxCount;
    }
};