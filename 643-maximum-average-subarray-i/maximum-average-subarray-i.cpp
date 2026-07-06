class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n = nums.size();

        double sum = 0;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }

        double maxSum = sum;

        for(int i = 0; i < n-k; i++){
            sum += nums[k+i] - nums[i];
            if(sum > maxSum) maxSum = sum;
        }

        return maxSum/k;
        
    }
};