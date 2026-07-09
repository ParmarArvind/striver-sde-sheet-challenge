class myStack {
    vector<int>arr;
    int size;
  public:
    myStack(int n) {
        // Define Data Structures
        size=n;
    }

    bool isEmpty() {
        // check if the stack is empty
        return !arr.size();
    }

    bool isFull() {
        // check if the stack is full
        return arr.size()==size;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(arr.size()==size) return ;
        arr.push_back(x);
    }

    void pop() {
        // removes an element from the top of the stack
        if(arr.size()==0) return ;
        arr.pop_back();
    }

    int peek() {
        // Returns the top element of the stack
        return arr.size() ? arr.back() : -1;
    }
};