class Solution {
public:
    int arrangeCoins(int n) {

        int low = 1;

        int high = n;

        int ans = low;
        
        while(low <= high){

            int x = low + (high - low) / 2;

            

            if(((long long)x * (x + 1)) / 2  <= n){

                // store answer and move right for maximum answer - 

                ans = x;

                low = x + 1;
            }else{
                
                // move left for valid answer - 

                high = x - 1;
            }
        }

        return ans;

        

    }
};