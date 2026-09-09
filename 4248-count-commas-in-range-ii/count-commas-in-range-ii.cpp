class Solution {
public:
    long long countCommas(long long n) {
        
        if(n < 1000) return 0; 

        long long ans = 0;

        long long x = 1000;

        while(n - x + 1 > 0){

            ans += n - x + 1;

            x *= 1000;
        }

        return ans;


    }
};