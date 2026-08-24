class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n = nums.size();

        vector<long long> prefix(n);

        prefix[0] = nums[0];

        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + nums[i];
        }

        int min_avg = INT_MAX, ans = 0;

        for(int i = 0; i < n; i++){

            int avg1 = prefix[i] / (i + 1);

            int avg2 = (i == n-1) ? 0 : (prefix[n-1] - prefix[i]) / (n-1-i);

            if(abs(avg1 - avg2) < min_avg){
                min_avg = abs(avg1 - avg2);
                ans = i;
            }
        }

        return ans;
    }
};