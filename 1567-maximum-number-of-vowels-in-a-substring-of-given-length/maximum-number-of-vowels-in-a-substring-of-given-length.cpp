class Solution {
public:
    int maxVowels(string s, int k) {
         
         int maxCount = 0, count = 0;

         for(int i = 0; i < k; i++){
            if(string("aeiou").find(s[i]) != string::npos) count++;
         }

         if(count > maxCount) maxCount = count;

         for(int i = 0; i < s.size()-k; i++){

            if(string("aeiou").find(s[i]) != string::npos) count--;
            if(string("aeiou").find(s[i+k]) != string::npos) count++;

            if(count > maxCount) maxCount = count;
         }

         return maxCount;



         
    }
};