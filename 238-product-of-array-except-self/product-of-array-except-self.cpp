class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> suffix(n);

        suffix[n-1] = nums[n-1];

        for(int i = n-2; i >= 0; i--){

            suffix[i] = suffix[i+1] * nums[i];

        }

        int pdt = 1;

        for(int i = 0; i < n; i++){

            if(i < n-1){
                suffix[i] = pdt * suffix[i+1];
            }else{
                suffix[i] = pdt;
            }

            pdt *= nums[i];
        }

        return suffix;
    }
};