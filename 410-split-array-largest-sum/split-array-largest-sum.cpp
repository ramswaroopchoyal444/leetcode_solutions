class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        

        int n = nums.size();

        // Search Space = [max(nums), sum(nums)]

        int low = 0, high = 0;

        for(int i = 0; i < n; i++){

            high += nums[i];

            if(low < nums[i]){
                low = nums[i];
            }
        }

        int ans = high;


        while(low <= high){

            int mid = low + (high - low)/2;

            int sum = 0, subArray = 1;

            for(int i = 0; i < n; i++){

                sum += nums[i];

                if(sum > mid){

                    subArray++;

                    sum = nums[i];
                }
            }

            if(subArray <= k){
                // store answer and move left for minimum answer - 

                ans = mid;

                high = mid - 1;
            }else{
                // move right for valid answer - 

                low = mid + 1;
            }
        }

        return ans;
    }
};