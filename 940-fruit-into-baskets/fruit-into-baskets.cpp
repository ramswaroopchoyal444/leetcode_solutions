class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int maxCount = 0,
            next_indx = 0,
            previous_indx = 0;
        
        unordered_map<int, int> freq;

        for(; next_indx < fruits.size(); next_indx++){

            freq[fruits[next_indx]]++;

            while(freq.size() > 2){

                freq[fruits[previous_indx]]--;

                if(freq[fruits[previous_indx]] == 0){
                    freq.erase(fruits[previous_indx]);
                }

                previous_indx++;
            }

            int count = 0;

            for(pair<int, int> baskets : freq){
                count += (baskets.second);
            }

            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};