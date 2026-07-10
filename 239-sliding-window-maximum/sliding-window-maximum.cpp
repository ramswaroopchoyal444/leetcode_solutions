class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int n = nums.size();

        vector<int> max_elements;

        deque<int> dq_max;

        for(int i = 0; i < k; i++){

            while(!(dq_max.empty()) && nums[i] > nums[dq_max.back()]){
                dq_max.pop_back();
            }

            dq_max.push_back(i);
        }

        for(int i = 0; i <= (n-k); i++){
            
            if(!(dq_max.empty())) max_elements.push_back(nums[dq_max.front()]);

            if(!(dq_max.empty()) && dq_max.front() == i){
                dq_max.pop_front();
            }

            while(!(dq_max.empty()) && (i+k < n) && nums[i+k] > nums[dq_max.back()]){
                dq_max.pop_back();
            }

            if(i+k < n){
                dq_max.push_back(i+k);
            }
        }
        return max_elements;
    }
};