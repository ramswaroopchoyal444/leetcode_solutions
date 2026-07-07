class RecentCounter {
public:

    queue<int> q;
    
    RecentCounter() {
        
    }
    
    int ping(int t) {

        q.push(t);

        while(!(q.empty())){
            if(t - q.front() <= 3000){
                return q.size();
            }else{
                q.pop();
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