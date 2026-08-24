class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        int n = nums.size() / 2;

        unordered_map<int, int> freq;

        int count = 0;

        for(int i = 0; i < (2 * n); i++){

            freq[nums[i]]++;

            if(freq[nums[i]] == 2){

                count++;

                freq[nums[i]] = 0;
            }
        }

        if( count == n){
            return true;
        }else{
            return false;
        }



    }
};