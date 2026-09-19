class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();

        if(digits[n - 1] + 1 < 10){

            digits[n - 1]++;

            return digits;
        }

        int count = 0;

        for(int i = 0; i < n; i++){

            if(digits[i] == 9){
                count++;
            }
        }

        if(count == n){

            vector<int> ans(n+1, 0);

            ans[0] = 1;

            return ans;
        }

        for(int i = n - 1; i >= 0; i--){

            if(digits[i] == 9){

                digits[i] = 0;

            }else{

                digits[i]++;

                return digits;
            }
            
        }

        return digits;
    }
};