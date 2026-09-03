class Solution {
public:

    bool isGoodString(string s, unordered_map<char, int> freq){

        for(int i = 0; i < s.size(); i++){

            if(freq[s[i]]-- <= 0){
                return false;
            }
        }

        return true;
    }

    int countCharacters(vector<string>& words, string chars) {
        
        int n = words.size(), m = chars.size();

        unordered_map<char, int> freq;

        int ans = 0;

        for(int i = 0; i < m; i++){
            freq[chars[i]]++;
        }

        for(int i = 0; i < n; i++){

            if(isGoodString(words[i], freq)){

                ans += words[i].size();
            }


        }

        return ans;
    }
};