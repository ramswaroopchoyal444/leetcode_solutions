class Solution {
public:
    string minWindow(string s, string t) {
        
        
        int m = s.size(),
            n = t.size(),
            minCount = INT_MAX,
            count = 0,
            next_indx = 0,
            previous_indx = 0;

        
        string ans = "";
        if(n>m) return ans;
        
        unordered_map<char, int> t_freq;

        for(int i = 0; i < n; i++){
            t_freq[t[i]]++;
        }

        unordered_map<char, int> window_freq;

        while(next_indx < m){

            char ch = s[next_indx];

            window_freq[ch]++;

            if(t_freq[ch] >= window_freq[ch]){

                count++;
            }

            next_indx++;

            // char pv = s[previous_indx];

            while(window_freq[s[previous_indx]] > t_freq[s[previous_indx]]){

                if(--window_freq[s[previous_indx]] == 0){
                    window_freq.erase(s[previous_indx]);
                }

                previous_indx++;
            }


            if(count == n){

                if(minCount > next_indx - previous_indx){
                    minCount = next_indx - previous_indx;
                    ans = s.substr(previous_indx,minCount);
                }
            }
         
        }

        if(minCount == INT_MAX){
            return "";
        }else{
            return ans;
        }
    }
};