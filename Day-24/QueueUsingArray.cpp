class myQueue {
    int *arr;
    int rear=-1;
    int front=-1;
    int size;
    
  public:
    myQueue(int n) {
        size=n;
        arr=new int[n];
    }
    bool isEmpty() {
        // check if the queue is empty
        return front==-1;
    }

    bool isFull() {
        return front==0 && rear==size-1;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(rear==size-1) return ;
        if(front==-1) front++;
        rear++;
        arr[rear]=x;
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(front==rear) front=rear=-1;
        else  front++;
    }
    int getFront() {
        // Returns the front element of the queue.
        return front ==-1 ? -1: arr[front];
    }
    int getRear() {
        // Return the last element of queue
        return rear==-1? -1: arr[rear];
    }
};