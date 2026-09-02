class Solution {
public:

    int first_occurrence(vector<int>& nums, int target){

        int n = nums.size();

        int low = 0, high = n-1, ans = -1;

        while(low <= high){

            int mid = low + (high - low) / 2;

            if(nums[mid] >= target){
                // if equal store answer - 
                if(nums[mid] == target){
                    ans = mid;
                } 
                // move left for minimum index or valid answer - 

                high = mid - 1;
            }else{
                // move right for valid answer - 
                
                low = mid + 1;
            }
        }

        return ans;


    }

    int last_occurrence(vector<int>& nums, int target){

        int n = nums.size();

        int low = 0, high = n-1, ans = -1;

        while(low <= high){

            int mid = low + (high - low) /2 ;

            if(nums[mid] <= target){
                // if equal store answer - 
                if(nums[mid] == target){
                    ans = mid;
                }

                // move right for maximum or valid answer - 

                low = mid + 1;

            }else{
                // move left for valid answer - 

                high = mid - 1;
            }
        }

        return ans;
    }


    vector<int> targetIndices(vector<int>& nums, int target) {
        
        vector<int> ans;

        sort(nums.begin(), nums.end());

        int first = first_occurrence(nums, target);
        int last = last_occurrence(nums, target);

        if(first == -1){
            return ans;
        }

        for(int i = first; i <= last; i++){
            ans.push_back(i);
        }

        return ans;
    }
};