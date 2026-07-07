class RecentCounter {
public:

    queue<int> ping_time;

    RecentCounter() {
        
    }
    
    int ping(int t) {   
        
        ping_time.push(t);

        while(!(ping_time.empty())){

            if(t-ping_time.front() <= 3000){
                return ping_time.size();
            }else{
                ping_time.pop();
            }
        }

        return 0;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */