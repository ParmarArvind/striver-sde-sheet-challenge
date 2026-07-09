// TC:
// addNum = O(logn)
// findMedian = O(1)
// SC=O(n) for storing the elements in the heap
class MedianFinder {
    int size;
    priority_queue<int,vector<int>,greater<int>>rightMinPQ; //min heap
    priority_queue<int>leftMaxPQ;//max heap

public:
    MedianFinder() {
        size=0;
    }
    
    void addNum(int num) {
        size++;
        if(leftMaxPQ.empty() || num<leftMaxPQ.top()) leftMaxPQ.push(num);
        else rightMinPQ.push(num);

        if(leftMaxPQ.size()>rightMinPQ.size() +1){
            int ele=leftMaxPQ.top();
            leftMaxPQ.pop();
            rightMinPQ.push(ele);
        }
        else if(leftMaxPQ.size() < rightMinPQ.size() ){
            int ele=rightMinPQ.top();
            rightMinPQ.pop();
            leftMaxPQ.push(ele);
        }
    }
    
    double findMedian() {
        if(size%2==0) return (leftMaxPQ.top() + rightMinPQ.top())/2.0;
        else return double(leftMaxPQ.top());
    }
};
