class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        int n = nums.size();

        int max1 = INT_MIN;

        for(int i = 0; i < n; i++){

            if(nums[i] > max1){

                max1 = nums[i];
            }
        }

        int max2 = INT_MIN;

        for(int i = 0; i < n; i++){

            if(nums[i] < max1 && nums[i] > max2){

                max2 = nums[i];
            }
        }

        long long max3 = LLONG_MIN;

        for(int i = 0; i < n; i++){

            if(nums[i] < max2 && nums[i] > max3){

                max3 = nums[i];
            }
        }

        if(max3 == LLONG_MIN){
            return max1;
        }else{
            return (int)max3;
        }
    }
};