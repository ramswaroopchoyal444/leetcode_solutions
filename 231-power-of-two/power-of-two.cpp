class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int count1 = 0;

        while(n > 0){

            if(n % 2 == 1){
                count1++;
            }

            n /= 2;
        }

        if(count1 != 1){
            return false;
        }else{
            return true;
        }
    }
};