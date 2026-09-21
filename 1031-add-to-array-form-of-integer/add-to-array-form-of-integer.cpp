class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int n = num.size();

        vector<int> ans;

        int carry = 0;

        int i = n - 1;

        while(i >= 0 || k > 0){

            if(i >= 0 && k > 0){

                int x = num[i] + (k % 10) + carry;

                if(x > 9){

                    ans.push_back(x % 10);

                    carry = 1;
                }else{

                    ans.push_back(x);

                    carry = 0;
                }

            }else if(i >= 0){

                int x = num[i] + carry;

                if(x > 9){

                    ans.push_back(x % 10);

                    carry = 1;
                }else{

                    ans.push_back(x);

                    carry = 0;
                }
            }else{

                int x = (k % 10) + carry;

                if(x > 9){

                    ans.push_back(x % 10);

                    carry = 1;
                }else{

                    ans.push_back(x);

                    carry = 0;
                }

            }

            i--;

            k /= 10;
        }

        if(carry == 1){
            ans.push_back(1);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};