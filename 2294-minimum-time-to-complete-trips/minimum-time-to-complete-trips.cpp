class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        
        int n = time.size();

        // Search Space = [1, min(time) * totalTrips]

        long long low = 1;

        long long high = LLONG_MAX;

        for(int i = 0; i < n; i++){
            if(high > time[i]){
                high = time[i];
            }
        }

        high *= totalTrips;

        long long ans = high;

        while(low <= high){

            long long t = low + (high - low) / 2;

            long long my_trips = 0;

            for(int i = 0; i < n; i++){
                my_trips += t / time[i];

                if(my_trips > totalTrips){
                    break;
                }
            }

            if(my_trips >= totalTrips){
                // move left for minimum answer - 
                ans = t;

                high = t - 1;
            }else{
                // move right for maximum answer - 

                low = t + 1;
            }
        }

        return ans;

    }
};