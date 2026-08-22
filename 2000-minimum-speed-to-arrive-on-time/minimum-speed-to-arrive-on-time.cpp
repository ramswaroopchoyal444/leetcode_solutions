class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        
        int n = dist.size();

        // Search Space = [1, max(dist)*100]

        int low = 1;

        int high = 0;

        for(int i = 0; i < n; i++){

            if(high < dist[i]){
                high = dist[i];
            }
        }

        high *= 100;

        int ans = -1;

        while(low <= high){

            int speed = low + (high - low)/2;

            double total_hours = 0;

            for(int i = 0; i < n; i++){

                if(i != n - 1){
                    total_hours += (dist[i] + (speed - 1)) / speed;
                }else{
                    total_hours += (double(dist[i])) / speed;
                }

                if(total_hours > hour){
                    break;
                }
            }

            if(total_hours <= hour){
                // move left for minimum answer - 

                ans = speed;

                high = speed - 1;
            }else{
                // move right for valid answer - 

                low = speed + 1;
            }
        }

        return ans;
    }
};