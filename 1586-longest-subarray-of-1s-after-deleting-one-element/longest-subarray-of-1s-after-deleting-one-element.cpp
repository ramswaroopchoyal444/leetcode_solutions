class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int maxCount = 0,
            count = 0,
            zeroCount = 0,
            next_indx = 0,
            previous_indx = 0;
        
        for(; next_indx < nums.size(); next_indx++){

            if(nums[next_indx] == 0){
                zeroCount++;
            }else{
                count++;
            }

            while(zeroCount > 1){
                if(nums[previous_indx] == 0){
                    zeroCount--;
                }else{
                    count--;
                }

                previous_indx++;
            }

            maxCount = max(maxCount, count);
        }

        if(maxCount == nums.size()){
            return maxCount - 1;
        }else{
            return maxCount;
        }

    }
};