class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        long long maxSum = 0;

        unordered_map<int,int> distinct_e;

        long long sum = 0;

        for(int i = 0; i < k; i++){
            distinct_e[nums[i]]++;
            sum += nums[i];
        }

        for(int i = 0; i <= (nums.size()-k); i++){
            if(distinct_e.size() == k){
                if(sum > maxSum){
                    maxSum = sum;
                }
            }

            distinct_e[nums[i]]--;
            if(distinct_e[nums[i]] == 0){
                distinct_e.erase(nums[i]);
            }
            sum -= nums[i];

            if(i+k < nums.size()){
                distinct_e[nums[i+k]]++;
                sum += nums[i+k];
            }
        }

        return maxSum;
        
    }
};