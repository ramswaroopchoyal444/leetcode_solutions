class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";

        int minLength = INT_MAX;

        int n = strs.size();

        for(int i = 0; i < n; i++){

            if(strs[i].size() < minLength){

                minLength = strs[i].size();
            }
        }

        for(int i = 0; i < minLength; i++){

            int count = 0;

            for(int j = 0; j < n; j++){

                if(strs[j][i] == strs[0][i]){

                    count++;
                }else{
                    break;
                }
            }

            if(count == n){
                ans.push_back(strs[0][i]);
            }else{
                break;
            }
        }

        return ans;
    }
};