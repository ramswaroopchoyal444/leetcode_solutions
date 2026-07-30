class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int n = s.size(),
            m = p.size(),
            count = 0;
        
        vector<int> anagrams_indx;

        unordered_map<char, int> p_freq, window;

        for(int i = 0; i < m; i++){
            p_freq[p[i]]++;
        }

        for(int i = 0; i < n; i++){

            // shrinking - 

            if(i >= m){
                if(p_freq.find(s[i-m]) != p_freq.end()){
                    if(p_freq[s[i-m]] >= window[s[i-m]]){
                        count--;
                    }
                }
                if(--window[s[i-m]] == 0){
                    window.erase(s[i-m]);
                }
            }

            window[s[i]]++;

            if(p_freq.find(s[i]) != p_freq.end()){
                if(p_freq[s[i]] >= window[s[i]]){
                    count++;
                }
            }

            if(count == m){
                anagrams_indx.push_back(i-m+1);
            }
            
        }

        return anagrams_indx;
    }
};