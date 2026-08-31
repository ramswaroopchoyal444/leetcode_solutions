class Solution {
public:
    string reverseWords(string s) {
        
        stringstream ss(s);

        string ans = "";

        string s1;
    

        while(ss >> s1){
            
            ans.insert(0," ");

            ans.insert(0, s1);
        }

        

        ans.pop_back();

        return ans;
    }
};