class Solution {
public:
    bool isValid(string s) {
        
        int n = s.size();

        stack<char> stk;

        if(n % 2 == 1) return false;

        for(int i = 0; i < n; i++){

            if(s[i] == '[' || s[i] == '(' || s[i] == '{'){
                stk.push(s[i]);
            }else if(!stk.empty()){

                if(s[i] == ')'){
                    if(stk.top() == '('){
                        stk.pop();
                    }else{
                        return false;
                    }
                }else if(s[i] == ']'){
                    if(stk.top() == '['){
                        stk.pop();
                    }else{
                        return false;
                    }
                }else if(s[i] == '}'){
                    if(stk.top() == '{'){
                        stk.pop();
                    }else{
                        return false;
                    }
                }
            }else{
                return false;
            }
        }

        if(stk.empty()){
            return true;
        }else{
            return false;
        }
    }
};