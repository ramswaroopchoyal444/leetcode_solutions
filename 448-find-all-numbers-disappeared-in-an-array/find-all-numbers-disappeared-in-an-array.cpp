class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n = nums.size();

        for(int i = 0; i < n; i++){

            int indx = abs(nums[i]) - 1;

            if(nums[indx] > 0){
                nums[indx] *= -1;
            }
        }

        vector<int> answer;

        for(int i = 0; i < n; i++){

            if(nums[i] > 0){
                answer.push_back(i + 1);
            }
        }

        return answer;
    }
};