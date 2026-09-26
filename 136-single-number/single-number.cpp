class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();

        unordered_set<int> s;

        for(int i = 0; i < n; i++){

            if(s.find(nums[i]) == s.end()){
                s.insert(nums[i]);
            }else{
                s.erase(nums[i]);
            }
        }

        int ans = 0;

        for(int i : s){
            ans = i;
        }

        return ans;
    }
};