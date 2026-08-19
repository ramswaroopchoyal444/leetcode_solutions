class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int low = 1, high = num, ans = low;

        while(low <= high){

            int mid = low + (high - low)/2;

            if(mid <= num/mid){
                // move right - 
                ans = mid;
                low = mid + 1;
            }else{
                // move left - 
                high = mid - 1;
            }
        }

        if(ans * ans == num){
            return true;
        }else{
            return false;
        }

    }
};