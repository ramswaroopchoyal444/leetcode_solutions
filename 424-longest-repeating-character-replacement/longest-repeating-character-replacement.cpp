class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int maxCount = 0,
            maxfreq = 0,
            next_indx = 0,
            previous_indx = 0;


        unordered_map<char, int> freq;

        while(next_indx < s.size()){

            freq[s[next_indx]]++;

            maxfreq = max(maxfreq, freq[s[next_indx]]);

            // char maxfreqChar;

            // if(maxfreq == freq[s[next_indx]]){
            //     maxfreqChar = s[next_indx];
            // }

            next_indx++;

            while((next_indx-previous_indx) - maxfreq > k){

                freq[s[previous_indx]]--;

                // if(char(s[previous_indx]) == maxfreqChar){
                //     maxfreq--;
                // }

                // Now here I've to check frequency of each element in map to update the maxfreq and maxfreqChar.

                // for(auto it : freq){
                //     if(it.second > maxfreq){
                //         maxfreq = it.second;
                //         maxfreqChar = it.first;
                //     }
                // }

                previous_indx++;
            }

            maxCount = max(maxCount, next_indx - previous_indx);

        }

        return maxCount;
    }
};