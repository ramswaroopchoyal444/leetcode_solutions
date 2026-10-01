class Solution {
public:
    bool judgeSquareSum(int c) {
        
        for(int a = 0; 1LL * a * a <= c; a++){

            double b = sqrt(1LL * c - 1LL * a * a);

            if(b == (int)b){

                return true;
            }
        }

        return false;
    }
};