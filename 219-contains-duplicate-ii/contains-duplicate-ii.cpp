class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        bool ans = false;

        for(int i = 0; i < nums.size(); i++){

            freq[nums[i]]++;

            if(i > k){
                if(--freq[nums[i-k-1]] == 0){
                    freq.erase(nums[i-k-1]);
                }
            }

            if(freq[nums[i]] > 1){
                return true;
            }
        }

        return false;
        
    }
};