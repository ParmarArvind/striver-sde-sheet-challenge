class MyStack {
    queue<int>queue1;
    queue<int>queue2;
public:
    MyStack() {}
    void push(int x) {
        if(queue2.empty()) queue1.push(x);
        else queue2.push(x);
    }
    int pop() {
        if(queue1.empty()) {
            if(queue2.empty()) return -1;
            while(queue2.size()!=1)
            {
                queue1.push(queue2.front());
                queue2.pop();
            }
            int ele=queue2.front();
            queue2.pop();
            return ele;
        }
        else {
            while(queue1.size()!=1)
            {
                queue2.push(queue1.front());
                queue1.pop();
            }
            int ele=queue1.front();
            queue1.pop();
            return ele;
        }
    }
    int top() {
        if(queue1.empty()) 
        {
            if(queue2.empty()) return -1;
            return queue2.back();
        }
        else return queue1.back();
    }
    bool empty() {
        return queue1.empty() && queue2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */