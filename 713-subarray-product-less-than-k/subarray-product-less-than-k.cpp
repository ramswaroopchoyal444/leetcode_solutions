class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        

        if(k==1) return 0;

        int pdt = 1, count = 0;
        int next_indx = 0, previous_indx = 0;

        while(next_indx < nums.size()){

            pdt *= nums[next_indx];
            next_indx++;

            // Shrinking - 

            while(pdt >= k){

                pdt /= nums[previous_indx];
                previous_indx++;
            }

            // answer - 

            count += (next_indx - previous_indx);
        }

        return count;
    }
};