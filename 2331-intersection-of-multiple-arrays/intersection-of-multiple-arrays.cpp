class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        vector<int> ans;

        map<int, int> freq;

        for(int i = 0; i < nums[0].size(); i++){
            freq[nums[0][i]]++;
        }

        for(int i = 1; i < nums.size(); i++){

            for(int j = 0; j < nums[i].size(); j++){
                if(freq.find(nums[i][j]) != freq.end()){
                    freq[nums[i][j]]++;
                }
            }
        }

        for(auto i : freq){
            if(i.second == nums.size()){
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};