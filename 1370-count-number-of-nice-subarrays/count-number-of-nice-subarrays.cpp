class Solution {
public:

    int atMostKOdd(vector<int> &nums, int k){

        int oddCount = 0,
            count = 0,
            previous_indx = 0,
            next_indx = 0;
        
        while(next_indx < nums.size()){

            if(nums[next_indx] % 2 == 1){
                oddCount++;
            }
            next_indx++;

            while(oddCount > k){

                if(nums[previous_indx] % 2 == 1){
                    oddCount--;

                }
                previous_indx++;
            }

            count += (next_indx - previous_indx);


        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int a = atMostKOdd(nums, k);
        int b = (k >=1) ? atMostKOdd(nums, k-1) : 0;

        return a - b;
    }
};