class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> ans;

        ans.push_back(nums[0]);
        ans.push_back(nums[1]);

        int indx1 = 0, indx2 = 1;

        for(int i = 2; i < n; i++){
            if(ans[indx1] > ans[indx2]){
                ans.insert(ans.begin()+indx1+1,nums[i]);
                indx1++;
                indx2++;
            }else{
                ans.push_back(nums[i]);
                indx2++;
            }
        }

        return ans;

        
    }
};