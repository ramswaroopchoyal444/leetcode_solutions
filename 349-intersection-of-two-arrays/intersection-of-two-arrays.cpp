class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;

        unordered_set<int> s1, s2, un;

        for(int i = 0; i < nums1.size(); i++){
            s1.insert(nums1[i]);
            un.insert(nums1[i]);
        }

        for(int i = 0; i < nums2.size(); i++){
            s2.insert(nums2[i]);
            un.insert(nums2[i]);
        }

        for(int i : un){

            bool x = (s1.find(i) != s1.end());
            bool y = (s2.find(i) != s2.end());

            if(x && y){
                ans.push_back(i);
            }
        }

        return ans;

    }
};