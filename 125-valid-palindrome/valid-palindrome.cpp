class Solution {
public:
    bool isPalindrome(string s) {

        int n = s.size();

        string forward = "";

        for(int i = 0; i < n; i++){

            if(s[i] >= 'a' && s[i] <= 'z'){

                forward.push_back(s[i]);
            }else if(s[i] >= 'A' && s[i] <= 'Z'){

                forward.push_back(s[i] + 32);
            }else if(s[i] >= '0' && s[i] <= '9'){

                forward.push_back(s[i]);
            }
        }

        string backward = "";

        for(int i = n - 1; i >= 0; i--){

            if(s[i] >= 'a' && s[i] <= 'z'){

                backward.push_back(s[i]);
            }else if(s[i] >= 'A' && s[i] <= 'Z'){

                backward.push_back(s[i] + 32);
            }else if(s[i] >= '0' && s[i] <= '9'){

                backward.push_back(s[i]);
            }
        }

        if(forward == backward){

            return true;
        }else{
            
            return false;
        }
    }
};