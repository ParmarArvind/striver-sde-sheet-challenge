class Solution {
public:
    // bture force tc= o(nlog(n)) , sc=o(1);
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin() ,nums.end());
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]) return nums[i];
        }

        return -1;
    }
};

class Solution {
public:
    // cyclic sort tc= o(n) , sc=o(1); (but we need to keep the modified original array in this method)
    int findDuplicate(vector<int>& nums) {
        int i=0;
        int n=nums.size();
         while(i<n)
        {
            if(nums[i] != i+1) 
            {
                int correctIndex=nums[i]-1;
                
                if(nums[i] != nums[correctIndex])
                {
                    swap(nums[i], nums[correctIndex]);
                }
                else {
                     return nums[i];
                }
            }
            else i++;
        }

        return -1;
    }
};

class Solution {
public:
//method -3 tc=o(n) , sc=o(n) (the good part is we not need to modifie the original array)
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<bool>isVisited(n+1,false);
        for(int i=0;i<n;i++)
        {
            //already visited
            if( isVisited[nums[i]] ) return nums[i];

            //mark as visited
            isVisited[nums[i]]=true;
        }
        return -1;
    }
};


class Solution {
public:
//method -4 tc=o(n) , sc=o(1)  (Hare And Tortoise method )
    int findDuplicate(vector<int>& nums) {
    
        int slow=0;
        int fast=0;
        // detect cycle
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow != fast);

        // now detect duplictae ele;
        slow=0;
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
        
    }
};
