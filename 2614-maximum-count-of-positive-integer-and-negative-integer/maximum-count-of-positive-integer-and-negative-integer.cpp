class Solution {
public:

    int lastNegative(vector<int>& nums){

        int n = nums.size();

        // Search space = [1, n-1];

        int low = 0;

        int high = n - 1;

        int ans = -1;

        while(low <= high){

            int mid = low + (high - low) / 2;

            if(nums[mid] < 0){

                // store answer and move right - 

                ans = mid;

                low = mid + 1;
            }else{

                high= mid - 1;
            }
        }

        return ans;
    }

    int firstPositive(vector<int>& nums){

        int n = nums.size();

        // Search space  = [0, n-1]

        int low = 0, high = n - 1, ans = -1;

        while(low <= high){

            int mid = low + (high - low) / 2;

            if(nums[mid] > 0){

                // store answer and move left - 

                ans = mid;

                high = mid - 1;
            }else{

                // move right for positive number - 

                low = mid + 1;
            }
        }

        return ans;
    }

    int maximumCount(vector<int>& nums) {
        
        int pos_indx = firstPositive(nums);

        int neg_indx = lastNegative(nums);

        int pos = (pos_indx == -1) ? 0 : nums.size() - pos_indx;

        int neg = (neg_indx == -1) ? 0 : neg_indx + 1;

        if(pos >= neg){

            return pos;
        }else{

            return neg;
        }

    }
};