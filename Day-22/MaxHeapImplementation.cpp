//TC :
// push = O(logn)
// pop=O(logn)
// peek=O(1)
// size=O(1)

//sc=O(n) for storing the elements in the heap
class maxHeap {
  private:
    // Initialize your data members
    vector<int>arr;
    int currSize;
    
    void heapify(int idx)
    {
        int left=2*idx+1;
        int right=2*idx+2;
        
        int largest=idx;
        if(left<currSize && arr[left]>arr[largest])
        {
            largest=left;
        }
        
        if(right < currSize && arr[right]>arr[largest])
        {
            largest=right;
        }
        if(idx != largest)
        {
            swap(arr[idx],arr[largest]);
            heapify(largest);
        }
    }

  public:
      maxHeap()
      {
          currSize=0;
      }
    void push(int x) {
        // Insert x into the heap
        if(currSize == arr.size()) {
            arr.push_back(x);
        }
        else arr[currSize]=x;
        
        currSize++;
        int idx=currSize-1;
        
        // heapify it (step-up)
        while(idx>0 && arr[(idx-1)/2] < arr[idx])
        {
            swap(arr[idx], arr[(idx-1)/2]);
            idx=(idx-1)/2;
        }
    }
    
    void pop() {
        if (currSize == 0) return;
    
        arr[0] = arr[currSize-1] ;    // Remove last element
        currSize--;
        //  heapify it ( step-down)
        if (currSize > 0)
            heapify(0);
    }

    int peek() {
        // Return the top element or -1 if empty
        return currSize==0 ? -1 : arr[0];
    }

    int size() {
        // Return the number of elements in the heap
        return currSize;
        
    }
};