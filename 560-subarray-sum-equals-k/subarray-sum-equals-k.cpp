class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int ans = 0;

        unordered_map<long long, int> freq;
        freq[0]++;

        long long CPS = nums[0];

        for(int i = 0; i < nums.size(); i++){

            if(i > 0){
                CPS += nums[i];
            }

            auto it = freq.find(CPS - k);
            if(it != freq.end()){
                ans += it->second;
            }

            freq[CPS]++;
        }

        return ans;
    }
};