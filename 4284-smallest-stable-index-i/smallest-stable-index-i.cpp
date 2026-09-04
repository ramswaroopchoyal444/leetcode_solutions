class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();

        int min_e = INT_MAX;

        vector<int> min_array(n), max_array(n);

        for(int i = n-1; i >= 0; i--){
            
            if(nums[i] < min_e){
                min_e = nums[i];
            }

            min_array[i] = min_e;
        }

        int max_e = 0;

        for(int i = 0; i < n; i++){

            if(nums[i] > max_e){
                max_e = nums[i];
            }

            max_array[i] = max_e; 
        }

        for(int i = 0; i < n; i++){

            int score = max_array[i] - min_array[i];

            if(score <= k){
                return i;
            }
        }

        return -1;
    }
};