class Solution {
  public:
  typedef long long l;
    vector<int> findTwoElement(vector<int>& arr) {
        int i=0; n=arr.size();
        int duplicate=0;
        // find duplicate ele with the help of cyclic sort t.c. o(n) ,sc = o(1);
        while(i<n)
        {
            if(arr[i] != i+1) 
            {
                int correctIndex=arr[i]-1;
                
                if(arr[i] != arr[correctIndex])
                {
                    swap(arr[i], arr[correctIndex]);
                }
                else {
                     duplicate=arr[i];
                     break;
                }
            }
            else i++;
        }
        
        l sum=0;
        for(i=0;i<n;i++)
        {
            sum+= arr[i];
        }
        sum-=duplicate;
        
        l actualSum=(((l)n)*((l)(n+1)))/2;
        int missing=(int)(actualSum-sum);
        
        return {duplicate , missing};
        
    }
};

//method -2 better reable solution (cyclic sort) t.c. o(n) ,sc = o(1);
class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        int i = 0;

        while(i < n) {
            int correctIndex = arr[i] - 1;

            if(arr[i] != arr[correctIndex]) {
                swap(arr[i], arr[correctIndex]);
            } else {
                i++;
            }
        }

        for(i = 0; i < n; i++) {
            if(arr[i] != i + 1) {
                return {arr[i], i + 1};
            }
        }

        return {-1, -1};
    }
};