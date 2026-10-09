class Solution {
public:
    bool isPalindrome(int x) {
        string s;
        s = to_string(x);
        int l = s.size();
        int m = 0;
        for(int i=0;i<l/2;i++){
            if(s[i]==s[l-1-i]){
                m++;
            }
        }
        if(m==l/2){
            return true;
        }else{
            return false;
        }
    }
};