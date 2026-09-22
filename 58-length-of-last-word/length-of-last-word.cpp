class Solution {
public:
    int lengthOfLastWord(string s) {
        
        stringstream ss(s);

        string x;

        while(ss >> x){
            continue;
        }

        cout << x << endl;

        return x.size();
    }
};