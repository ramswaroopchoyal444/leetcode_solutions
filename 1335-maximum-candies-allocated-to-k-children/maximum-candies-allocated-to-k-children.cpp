class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        
        int n =  candies.size();

        // Search Space = [1, max(candies)]

        int low = 1;

        int high = 0;

        long long total_candies = 0;

        for(int i = 0; i < n; i++){

            if(candies[i] > high){
                high = candies[i];

                
            }

            total_candies += candies[i];
        }

        if(k > total_candies){
            return 0;
        }

        int ans = low;

        while(low <= high){

            int min_candies = low + (high - low) / 2;

            long long total_children = 0;

            for(int i = 0; i < n; i++){

                total_children += (candies[i] / min_candies);
            }

            if(total_children >= k){
                // store answer and move right for maximum answer - 

                ans = min_candies;

                low = min_candies + 1;
            }else{
                // move left for valid answer - 

                high = min_candies - 1;
            }
        }

        return ans;
    }
};