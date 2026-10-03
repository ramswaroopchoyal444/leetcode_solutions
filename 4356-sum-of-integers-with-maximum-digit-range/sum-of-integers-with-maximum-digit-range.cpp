class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        
        int n = nums.size();

        int ans = 0;

        int max_range = -1;

        for(int i = 0; i < n; i++){

            string s = to_string(nums[i]);

            int min_r = 10, max_r = -1;

            for(int j = 0; j < s.size(); j++){

                min_r = min(min_r, int(s[j] - '0'));

                max_r = max(max_r, int(s[j] - '0'));
            }

            int digit_range = max_r - min_r;

            if(digit_range == max_range){

                ans += nums[i];
            }else if(digit_range > max_range){

                max_range = digit_range;

                ans = nums[i];
            }


        }

        return ans;
    }
};