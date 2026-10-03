class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        
        int n = nums.size();

        int max_e = 0;

        int min_e = 101;

        for(int i = 0; i < n; i++){

            max_e = max(max_e, nums[i]);

            min_e = min(min_e, nums[i]);
        }

        for(int i = 0; i < n; i++){

            if(nums[i] != max_e && nums[i] != min_e){

                return nums[i];
            }
        }

        return -1;
    }
};