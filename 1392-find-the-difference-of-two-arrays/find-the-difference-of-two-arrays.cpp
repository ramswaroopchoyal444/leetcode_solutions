class Solution {
public:

    vector<int> nums1_nums2(vector<int>& nums1, vector<int>& nums2){

        unordered_set<int> s1, s2;

        for(int i = 0; i < nums2.size(); i++){
            s2.insert(nums2[i]);
        }

        for(int i = 0; i < nums1.size(); i++){
            if(s2.find(nums1[i]) == s2.end()){
                s1.insert(nums1[i]);
            }
        }

        vector<int> ans(s1.begin(), s1.end());

        return ans;
    }

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>> ans(2);

        ans[0] = nums1_nums2(nums1, nums2);
        ans[1] = nums1_nums2(nums2, nums1);

        return ans;
    }
};