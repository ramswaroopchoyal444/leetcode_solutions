class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();

        k = k % n;

        // int curr_indx = 0; // 1

        // int right_indx = (curr_indx + k ) % n; // 3

        // int next_element = nums[right_indx]; // arr[3] = 4

        // nums[right_indx] = nums[curr_indx]; // arr[3] = arr[0] = 1
        // // [1, 2, 3, 1, 5, 6, 7]

        // curr_indx = right_indx; // 3

        // int curr_element = next_element;

        // int count = 1;

        // while(count < n){

        //     right_indx = (curr_indx + k ) % n; // 6

        //     next_element = nums[right_indx]; // 7

        //     nums[right_indx] = curr_element; // [1, 2, 3, 1, 5, 6, 4]

        //     curr_indx = right_indx; // 6

        //     curr_element = next_element; 

        //     count++;

        vector<int> temp_v(n);

        for(int i = 0; i < n; i++){

            temp_v[(i + k) % n] = nums[i];
        }

        for(int i = 0; i < n; i++){

            nums[i] = temp_v[i];
        }




        
    }
};