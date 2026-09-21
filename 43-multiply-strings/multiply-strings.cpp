class Solution {
public:

    string intToStr(int n){

        string ans = "";

        while(n > 0){

            ans.push_back('0' + (n % 10));

            n /= 10;
        }

        // cout << ans << endl;

        for(int i = 0; i < ans.size() / 2; i++){

            swap(ans[i], ans[ans.size() - 1 - i]);

        }

        // cout << ans << endl;

        return ans;
    }

    string strSum(string s1, string s2){

        int n1 = s1.size(), n2 = s2.size();

        string ans = "";

        int i = n1 - 1, j = n2 - 1;

        int carry = 0;

        while(i >= 0 || j >= 0){

            if(i >= 0 && j >= 0){

                int x = (s1[i] - '0') + (s2[j] - '0') + carry;

                if(x > 9){

                    ans.push_back('0' + x % 10);

                    carry = 1;
                }else{

                    ans.push_back('0' + x);

                    carry = 0;
                }
            }else if(i >= 0){

                int x = (s1[i] - '0') + carry;

                if(x > 9){

                    ans.push_back('0' + x % 10);

                    carry = 1;
                }else{

                    ans.push_back('0' + x);

                    carry = 0;
                }
            }else{

                int x = (s2[j] - '0') + carry;

                if(x > 9){

                    ans.push_back('0' + x % 10);

                    carry = 1;
                }else{

                    ans.push_back('0' + x);

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

        // cout << ans << endl;

        return ans;
    }

    string multiply(string num1, string num2) {
        
        int s1 = num1.size(), s2 = num2.size();

        string answer = "0";

        int p1 = 0;

        for(int i = s1 - 1; i >= 0; i--){

            int p2 = 0;

            for(int j = s2 - 1; j >= 0; j--){

                int pdt = ((num1[i] - '0') * (num2[j] - '0'));

                // cout << pdt << endl;

                string sdt = intToStr(pdt);

                string zeros = "";

                for(int i = 0; i < p1 + p2; i++){

                    zeros.push_back('0');
                }

                sdt.append(zeros);

                // cout << sdt << endl;

                answer = strSum(answer, sdt);



                // cout << answer << endl;

                p2++;


            }

            p1++;
        }

        int count = 0;

        for(int i = 0; i < answer.size() - 1; i++){

            if(answer[i] == '0'){
                count++;
            }else{
                break;
            }
        }

        answer.erase(0,count);

        // cout << answer << endl;

        return answer;
    }
};