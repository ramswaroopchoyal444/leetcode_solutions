class Solution {
public:
    int strStr(string haystack, string needle) {
        

        int n = haystack.size(), m = needle.size();

        for(int i = 0; i < n - m + 1; i++){

            int count = 0;

            for(int j = 0; j < m; j++){

                if(needle[j] == haystack[i + j]){
                    count++;
                }
            }

            if(count == m){
                return i;
            }
        }

        return -1;
    }
};