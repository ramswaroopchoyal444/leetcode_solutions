class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int n = bloomDay.size();

        if((long long)m * k > n) return -1;

        // Search Space = [1, max(bloomDay)]

        int low = 1;

        int high = *max_element(bloomDay.begin(), bloomDay.end());

        int ans = -1;

        while(low <= high){

            int days = low + (high - low)/2;

            int flowers = 0;

            int max_bouquets = 0;

            for(int i = 0; i < n; i++){
                
                if(bloomDay[i] <= days){
                    flowers++;
                }else{
                    flowers = 0;
                }

                if(flowers == k){
                    max_bouquets++;
                    flowers = 0;
                }
            }

            if(max_bouquets >= m){
                // store answer and move left for minimum answer - 

                ans = days;

                high = days - 1;
            }else{
                // move right for valid answer - 

                low = days + 1;
            }
        }

        return ans;
    }
};