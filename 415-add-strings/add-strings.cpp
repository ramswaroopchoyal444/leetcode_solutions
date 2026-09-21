class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int n1 = num1.size(), n2 = num2.size();

        string ans = "";

        int i = n1 - 1, j = n2 - 1;

        int carry = 0;

        while(i >= 0 || j >= 0){

            if(i >= 0 && j >= 0){

                int x = (num1[i] - '0') + (num2[j] - '0') + carry;

                if(x > 9){

                    ans.push_back(x % 10 + '0');

                    carry = 1;
                }else{

                    ans.push_back(x + '0');

                    carry = 0;
                }
            }else if(i >= 0){

                int x = (num1[i] - '0') + carry;

                if(x > 9){

                    ans.push_back(x % 10 + '0');

                    carry = 1;
                }else{

                    ans.push_back(x + '0');

                    carry = 0;
                }
            }else{

                int x = (num2[j] - '0') + carry;

                if(x > 9){

                    ans.push_back(x % 10 + '0');

                    carry = 1;
                }else{

                    ans.push_back(x + '0');

                    carry = 0;
                }
            }

            i--;
            j--;
        }

        if(carry == 1){
            ans.push_back('1');
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};