class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int maxCount = 0,
            count = 0,
            zeroCount = 0,
            next_indx = 0,
            previous_indx = 0;
        
        while(next_indx < nums.size()){

            if(nums[next_indx] == 0){
                zeroCount++;
            }

            count++;
            next_indx++;

            while(zeroCount > k){
                if(nums[previous_indx] == 0){
                    zeroCount--;
                }
                count--;
                previous_indx++;
            }

            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};