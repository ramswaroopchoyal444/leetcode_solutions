class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n = weights.size();

        // Search Space = [max, sum]

        int low = 0;

        int high = 0;

        for(int i = 0; i < n; i++){
            high += weights[i];
            if(low < weights[i]){
                low = weights[i];
            }
        }

        int ans = high;

        while(low <= high){

            int capacity = low + (high - low) / 2;

            int my_days = 0;

            long long sum = 0;

            for(int i = 0; i < n; i++){

                sum += weights[i];

                if(sum > capacity){

                    my_days++;

                    sum = weights[i];

                }
            }

            // my_days++;

            if(my_days < days){
                // move left for minimum answer - 
                
                ans = capacity;

                high = capacity - 1;
            }else{
                // move right for valid answer - 

                low = capacity + 1;
            }
        }

        return ans;
    }
};