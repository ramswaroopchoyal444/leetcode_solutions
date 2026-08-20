// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        // Search Space = [1, n]

        int low = 1, high = n;

        int ans = n;

        while(low <= high){

            int x = low + (high - low)/2;

            // Pattern : G G G G B B B B

            if(isBadVersion(x)){
                // move left - 
                ans = x;
                high = x - 1;
            }else{
                // move right - 
                low = x + 1;
            }
        }

        return ans;
    }
};