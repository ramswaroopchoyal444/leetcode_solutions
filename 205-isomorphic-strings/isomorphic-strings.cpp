class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int n = s.size(), m = t.size();

        if(n != m) return false;

        unordered_map<char, char> isomorphic1, isomorphic2;

        for(int i = 0; i < n; i++){

            // if(s[i] == t[i]){
            //     continue;
            // }

            if(isomorphic1.find(s[i]) == isomorphic1.end() ){
                isomorphic1[s[i]] = t[i];
            }else{
                if(isomorphic1[s[i]] != t[i]){
                    return false;
                }
            }

            if(isomorphic2.find(t[i]) == isomorphic2.end()){
                isomorphic2[t[i]] = s[i];
            }else{
                if(isomorphic2[t[i]] != s[i]){
                    return false;
                }
            }
        }

        return true;



    }
};