class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();

        // int answer = INT_MAX;

        vector<int> max_a(n), min_a(n);

        int max_e = 0, min_e = INT_MAX;

        for(int i = 0; i < n; i++){

            max_e = max(max_e, nums[i]);

            // cout << max_e << " ";

            max_a[i] = max_e;
        }

        // cout << endl;

        for(int i = n - 1; i >= 0; i--){

            min_e = min(min_e, nums[i]);

            // cout << min_e << " ";

            min_a[i] = min_e;
        }
        // cout << endl;

        for(int i = 0; i < n; i++){

            int score = max_a[i] - min_a[i];

            if(score <= k){
                // answer = min(answer, max_a[i] - min_a[i]);
                return i;
            }
        }

        return -1;

        
    }
};