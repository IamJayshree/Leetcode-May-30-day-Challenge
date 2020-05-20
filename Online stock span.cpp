//Contributed by prat31

class StockSpanner {
public:
    stack<pair<int, int>> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int toreturn=1;
        while(!s.empty() && s.top().first <= price){
            toreturn += s.top().second;
            s.pop();
        }
        s.push(make_pair(price, toreturn));
        return toreturn;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */