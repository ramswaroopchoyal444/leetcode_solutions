class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        
        unordered_map<char, int> plate;

        for(char i : licensePlate){

            if(i >= 'a' && i <= 'z'){

                plate[i]++;
            }

            if(i >= 'A' && i <= 'Z'){

                plate[i + 32]++;
            }
        }

        // for(auto it : plate){

        //     cout << it.first << ' ' << it.second << endl;
        // }

        string ans = "";

        for(string s : words){

            unordered_map<char, int> freq;

            for(char i : s){

                freq[i]++;
            }

            bool allPresent = true;

            for(auto i : plate){

                if(freq[i.first] < plate[i.first]){

                    allPresent = false;
                    break;
                }
            }

            if(allPresent){

                if(ans.size() != 0 && s.size() < ans.size()){

                    ans = s;
                }

                if(ans.size() == 0){
                    ans = s;
                }
            }


        }



        return ans;
    }
};