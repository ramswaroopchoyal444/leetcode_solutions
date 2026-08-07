class Solution {
public:

    long long atMostSumK(vector<int> &nums, int k){

        int sum = 0,
            previous_indx = 0,
            next_indx = 0;
        
        long long count = 0;
        
        while(next_indx < nums.size()){

            // Expand - 

            sum += nums[next_indx];
            next_indx++;

            // Shrink if it becomes invalid - 

            while(sum > k){

                sum -= nums[previous_indx];
                previous_indx++;
            }

            // answer - 

            count += (next_indx - previous_indx);
        }

        return count;
    }



    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        int a = atMostSumK(nums, goal);
        int b = (goal >= 1) ? atMostSumK(nums, goal-1) : 0;

        return a - b;
    }
};