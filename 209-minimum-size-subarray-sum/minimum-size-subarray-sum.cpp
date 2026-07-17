class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        long long sum = 0, total = 0;

        int next_indx = 0;
        int previous_indx = 0;

        int minLength = nums.size();

        while( next_indx < nums.size()){

            sum += nums[next_indx];
            total += nums[next_indx];
            next_indx++;

            while(sum - nums[previous_indx] >= target){
                sum -= nums[previous_indx];
                previous_indx++;
            }

            if((sum >= target) && (minLength > (next_indx - previous_indx))){
                minLength = (next_indx - previous_indx);
            }
        }

        if(total < target){
            return 0;
        }else{
            return minLength;
        }
    }
};