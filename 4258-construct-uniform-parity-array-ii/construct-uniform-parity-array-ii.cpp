class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        
        int n = nums1.size();

        int evenCount = 0, oddCount = 0;

        int minOdd1 = INT_MAX, minOdd2 = INT_MAX;

        for(int i = 0; i < n; i++){

            if(nums1[i] % 2 == 0){

                evenCount++;

            }else{

                oddCount++;

                if(nums1[i] < minOdd1){

                    minOdd2 = minOdd1;

                    minOdd1 = nums1[i];
                }
            }
        }

        if(evenCount == n || oddCount == n){
            return true;
        }else{
            evenCount = 0, oddCount = 0;
        }

        for(int i = 0; i < n; i++){

            if(nums1[i] % 2 == 0){

                evenCount++;

                if(nums1[i] - minOdd1 >= 1){

                    oddCount++;
                }
            }else{

                oddCount++;

                if(nums1[i] != minOdd1){

                    if(nums1[i] - minOdd1 >= 1){

                        evenCount++;
                    }
                }else{
                    
                    if(minOdd2 != INT_MAX){

                        if(nums1[i] - minOdd2 >= 1){

                            evenCount++;
                        }
                    }
                }
            }
        }

        if(evenCount == n || oddCount == n){
            return true;
        }else{
            return false;
        }
    }
};