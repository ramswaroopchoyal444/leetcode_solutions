class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        
        int n = s.size(), count = 0;

        bool present = false;

        do{

            int x = 0;
            for(int i = 0; i < n-1;){

                if(s[i] == '0' && s[i + 1] == '1'){
                    s[i] = '1';
                    s[i + 1] = '0';
                    i += 2;
                    present = true;
                    x++;
                }else{
                    i++;
                }
            }

            // cout << s << endl;
            if(x == 0) present = false;

            if(present) count++;

    
        }while(present);

        cout << s << endl;

        return count;
    }
};