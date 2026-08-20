class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        sort(piles.begin(), piles.end());
        
        int n = piles.size();

        // Search space : [1, piles[n-1]];

        int low = 1, high = piles[n-1], ans = n-1;

        while(low <= high){

            int k = low + (high - low)/2;

            long long total_hours = 0;

            for(int i = 0; i < n; i++){

                total_hours += ((piles[i] + (k - 1)) / k);

            }

            if(total_hours <= h){
                // move left for minimum answer -
                ans = k;
                high = k - 1;
            }else{
                // move right for valid answer - 
                low = k + 1;
            }
        }

        return ans;


    }
};