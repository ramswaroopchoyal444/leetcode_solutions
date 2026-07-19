class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int maxCount = 0;

        for(int i = 0; i < s.size(); i++){
            unordered_set<char> chars;
            int count = 0;
            for(int j = i; j < s.size(); j++){
                chars.insert(s[j]);
                count++;
                if(count > chars.size()){
                    count--;
                    break;
                }
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};