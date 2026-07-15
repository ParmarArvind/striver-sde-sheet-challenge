class StockSpanner {
public:
    vector<int> arr;
    int i;
    stack<int> st;

    StockSpanner() {
        i = 0;
    }

    int next(int price) {
        
        while (!st.empty() && arr[st.top()] <= price)
            st.pop();

        int ans;

        if (st.empty()) ans = i + 1;
        else  ans = i - st.top();

        arr.push_back(price);
        st.push(i);
        i++;

        return ans;
    }
};
// better one
class StockSpanner {
public:
    stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span=1;
        if(!st.empty() && st.top().first>price) {
            st.push({price, span});
        }
        else{
            while(!st.empty() && price>=st.top().first)
            {
                span += st.top().second;
                st.pop();
            }
            if(st.empty()) st.push({price,span});
            else {
                st.push({price,span});
            }
        }
        return span;
    }
};
