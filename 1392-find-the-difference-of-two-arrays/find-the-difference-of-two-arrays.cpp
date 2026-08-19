class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>> ans(2);

        unordered_set<int> s1, s2, un1, un2;

        for(int i = 0; i < nums1.size(); i++){
            s1.insert(nums1[i]);
        }

        for(int i = 0; i < nums2.size(); i++){
            s2.insert(nums2[i]);
        }

        for(int i = 0; i < nums1.size(); i++){
            if(s2.find(nums1[i]) == s2.end() && un1.find(nums1[i]) == un1.end()){
                ans[0].push_back(nums1[i]);
                un1.insert(nums1[i]);
            }

        }

        for(int i = 0; i < nums2.size(); i++){
            if(s1.find(nums2[i]) == s1.end() && un2.find(nums2[i]) == un2.end()){
                ans[1].push_back(nums2[i]);
                un2.insert(nums2[i]);
            }
        }

        return ans;
    }
};