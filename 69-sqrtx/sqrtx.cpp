class Solution {
public:
    int mySqrt(int x) {
        
        if(x == 0) return 0;

        // Search Space = [1,x];

        int low = 1, high = x, ans = low;

        while(low <= high){

            int mid = low + (high - low)/2;

            if(mid <= x/mid){
                // mid*mid <= N
                // move right - 
                ans = mid;
                low = mid + 1;
            }else{
                // move left - 
                high = mid - 1;
            }

        }

        return ans;
        

    }
    
};