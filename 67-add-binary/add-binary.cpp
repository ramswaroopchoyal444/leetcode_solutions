class Solution {
public:
    string addBinary(string a, string b) {
        
        int n1 = a.size(), n2 = b.size();

        string ans = "";

        int i = n1 - 1, j = n2 - 1, carry = 0;

        while(i >= 0 || j >= 0){

            if(i >= 0 && j >= 0){

                int x = ((a[i] - '0') + (b[j] - '0') + carry);

                if(x == 3){

                    ans.push_back('1');

                    carry = 1;
                }else if(x == 2){

                    ans.push_back('0');

                    carry = 1;
                }else if(x == 1){

                    ans.push_back('1');

                    carry = 0;
                }else{

                    ans.push_back('0');

                    carry = 0;
                }
            }else if(i >= 0){

                int x = (a[i] - '0') + carry;

                if(x == 2){

                    ans.push_back('0');

                    carry = 1;
                }else if(x == 1){

                    ans.push_back('1');

                    carry = 0;
                }else{

                    ans.push_back('0');

                    carry = 0;
                }
            }else if(j >= 0){

                int x = (b[j] - '0') + carry;

                if(x == 2){

                    ans.push_back('0');

                    carry = 1;
                }else if(x == 1){

                    ans.push_back('1');

                    carry = 0;
                }else{

                    ans.push_back('0');

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