class Solution {
public:
    int reverse(int x) {
         
        string s = to_string(x);

        if(x < 0){
            s.erase(0,1);
        }

        int n = s.size();

        // if(n >= 10 && s[n - 1] - '0' > 2){
        //     return 0;
        // }

        for(int i = 0; i < n/2; i++){

            char temp = s[i];
            s[i] = s[n-1-i];
            s[n-1-i] = temp;
        }

        cout << s << endl;

        long long ans = stoll(s);

        if(x < 0){
            ans *= -1;
        }

        if(ans > INT_MAX || ans < INT_MIN){
            return 0;
        }

        int my_ans = int(ans);

        return ans;

        

        

        

    }
};