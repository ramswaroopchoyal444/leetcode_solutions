class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int L = 0, R = nums.size() - 1;

        while(L <= R){

            int mid = L + (R - L)/2;

            if(nums[mid] == target){
                return mid;
            }

            if(nums[mid] > target){
                // move left - 

                R = mid - 1;

            }else{
                // move right - 

                L = mid + 1;

            }
        }

        return -1;
    }
};