class Solution {
public:


    int atMostKDistinctElements(vector<int> &nums, int K){

            int count = 0,
                next_indx = 0,
                previous_indx = 0;
            
            unordered_map<int, int> freq;

            while(next_indx < nums.size()){

                // Expand - 

                freq[nums[next_indx]]++;

                next_indx++;

                // Shrinking when invalid - 

                while(freq.size() > K){

                    if(--freq[nums[previous_indx]] == 0){
                        freq.erase(nums[previous_indx]);
                    }

                    previous_indx++;
                }

                // answer updation - 

                count += (next_indx - previous_indx);
            }

            return count;
        }

    int subarraysWithKDistinct(vector<int>& nums, int k) {

        int a = atMostKDistinctElements(nums, k);
        int b = 0;
        if(k>0){
            b = atMostKDistinctElements(nums, k-1);
        }
        return a - b;
        
    }
};