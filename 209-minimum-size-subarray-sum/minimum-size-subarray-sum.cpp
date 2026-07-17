class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        long long sum = 0, total = 0;

        int next_indx = 0;
        int previous_indx = 0;

        int minLength = INT_MAX;

        while( next_indx < nums.size()){

            sum += nums[next_indx];
            next_indx++;

            while(sum - nums[previous_indx] >= target){
                sum -= nums[previous_indx];
                previous_indx++;
            }

            if(sum >= target){
                minLength = min(minLength, (next_indx - previous_indx));
            }
        }

        if(minLength == INT_MAX){
            return 0;
        }else{
            return minLength;
        }
    }
};