class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        sort(nums.begin(), nums.end());

        
        
        // Search Space = [1, nums[n-1]]

        int n = nums.size();

        
        
        int low = 1, high = nums[n-1];

        int ans = high;

        while(low <= high){

            int result = 0;

            int divisor = low + (high - low)/2;

            for(int i = 0; i < n; i++){

                int division = ( ( nums[i] + (divisor - 1) ) / divisor );

                result += division;

            }

            if( result <= threshold){
                // move left for minimum answer - 
                ans = divisor;
                high = divisor - 1;
            }else{
                // move right for valid answer - 
                low = divisor + 1;
            }
        }

        return ans;


    }
};