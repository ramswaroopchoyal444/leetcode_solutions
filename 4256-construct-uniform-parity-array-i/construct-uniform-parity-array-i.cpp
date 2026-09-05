class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        
        int n = nums1.size();

        int oddCount = 0, evenCount = 0;

        int min_even = 102, min_odd = 101;

        for(int i = 0; i < n; i++){

            if(nums1[i] % 2 == 0){
                // Even number - 

                min_even = min(min_even, nums1[i]);

                evenCount++;
            }else{
                // odd number - 

                min_odd = min(min_odd, nums1[i]);

                oddCount++;
            }
        }

        if(evenCount == n || oddCount == n){
            return true;
        }

        // int madeEven = 0, madeOdd = 0;

        // for(int i = 0; i < n; i++){

        //     if(nums1[i] % 2 == 0){

        //         // Even number - 

        //         evenCount++;

        //         // Making it odd - 


        //     }
        // }

        return true;


    }
};