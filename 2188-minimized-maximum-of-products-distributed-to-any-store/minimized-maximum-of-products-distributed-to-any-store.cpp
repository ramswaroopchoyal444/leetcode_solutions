class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        
        int m = quantities.size();

        // Search Space = [1, max(quantities)]

        int low = 1;

        int high = 0;

        for(int i = 0; i < m; i++){
            if(high < quantities[i]){
                high = quantities[i];
            }
        }

        int ans = high;

        while(low <= high){

            int x = low + (high - low) / 2;

            int retailers = 0;

            for(int i = 0; i < m; i++){
                retailers += ((quantities[i] + (x - 1)) / x);
            }

            if(retailers <= n){
                // move left for minimum answer - 

                ans = x;

                high = x - 1;
            }else{
                // move right for valid answer - 

                low = x + 1;
            }

        }

        return ans;


    }
};