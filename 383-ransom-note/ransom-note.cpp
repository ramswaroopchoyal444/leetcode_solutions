class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> ransom, mazne;

        for(int i = 0; i < magazine.size(); i++){

            mazne[magazine[i]]++;
        }

        for(int i = 0; i < ransomNote.size(); i++){
            
            if(mazne[ransomNote[i]]-- <= 0){
                return false;
            }
        }

        return true;
    }
};