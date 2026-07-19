class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int maxCount = 0,
            next_indx = 0,
            previous_indx = 0;
        
        unordered_map<int, int> freq;

        while(next_indx < fruits.size()){


            freq[fruits[next_indx]]++;
            next_indx++;

            while(freq.size() > 2){
                
                int fruit = freq[fruits[previous_indx]];

                if(--freq[fruits[previous_indx]] == 0){
                    freq.erase(fruits[previous_indx]);
                }

                previous_indx++;
            }

            maxCount = max(maxCount, next_indx - previous_indx);
        }

        return maxCount;
    }
};