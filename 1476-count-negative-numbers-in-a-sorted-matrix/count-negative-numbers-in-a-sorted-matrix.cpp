class Solution {
public:

    // Find first negative number in 1D-vector by Binary Search - 

    int firstNegative(vector<int>& nums){

        // Search Space = [1, nums.size() - 1]

        int low = 0, high = nums.size() - 1;

        int ans = high;

        while(low <= high){

            int mid = low + (high - low) / 2;

            if(nums[mid] < 0){
                
                // store answer and move left - 

                ans = mid;

                high = mid - 1;
            }else{

                // move right - 

                low = mid + 1;
            }
        }

        if(nums[ans] < 0){
            return ans;
        }else{
            return -1;
        }
    }

    int countNegatives(vector<vector<int>>& grid) {
        
        int ans = 0;

        int m = grid.size();

        int n = grid[0].size();

        for(int i = 0; i < m; i++){

            int first = firstNegative(grid[i]);

            if(first != -1){

                ans += (n - first);
            }
        }

        return ans;


    }
};