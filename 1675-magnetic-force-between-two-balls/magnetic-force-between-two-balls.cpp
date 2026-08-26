class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        
        sort(position.begin(), position.end());

        int n = position.size();

        // Search Space = [1, max(position) - min(position)]

        int low = 1;

        int high = position[n-1] - position[0];

        int ans = low;

        while(low <= high){

            int force = low + (high - low) / 2;

            int last_ball = 0;

            int total_balls = 1;

            for(int i = 1; i < n; i++){

                int current_force = position[i] - position[last_ball];

                if(current_force >= force){

                    total_balls++;
                    last_ball = i;
                }

                if(total_balls >= m){
                    break;
                }
            }

            if(total_balls >= m){
                // store answer and move right for maximum answer - 

                ans = force;

                low = force + 1;
            }else{
                // move left for valid answer - 

                high = force - 1;
            }
        }

        return ans;
    }
};