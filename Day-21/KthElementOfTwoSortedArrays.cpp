// method 1 tc=O(m+n) sc=O(1)
class Solution {
public:
    int kthElement(vector<int>& nums1, vector<int>& nums2 ,int k) {
        int count=0;

        int first=0,second=0;
        
        while(first!=nums1.size() && second!=nums2.size())
        {
            bool isFromFirst=true;
            if(nums1[first]<=nums2[second]) 
            {
                first++;
            }else 
            {
                second++; 
                isFromFirst=false;
            }

            count++;
            
            if(count==k) return  isFromFirst ? nums1[first-1] : nums2[second-1];
            
        }
        while(first!=nums1.size())
        {
            first++; 
            count++;
             if(count==k) return  nums1[first-1];
        }
        while(second!=nums2.size())
        {
            second++; 
            count++;
             if(count==k) return  nums2[second-1];
        }
        
        
        return 0;
    }
};
// method 2 tc=O(log(min(m,n))) sc=O(1)
class Solution {
public:
    int kthElement(vector<int> &nums1, vector<int> &nums2, int k) {

        if (nums1.size() > nums2.size())
            return kthElement(nums2, nums1, k);

        int n = nums1.size();
        int m = nums2.size();

        int left = max(0, k - m);
        int right = min(k, n);

        while (left <= right) {

            int mid1 = left + (right - left) / 2;
            int mid2 = k - mid1;

            int x1 = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1];
            int x2 = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];

            int x3 = (mid1 == n) ? INT_MAX : nums1[mid1];
            int x4 = (mid2 == m) ? INT_MAX : nums2[mid2];

            if (x1 <= x4 && x2 <= x3)
                return max(x1, x2);

            else if (x1 > x4)
                right = mid1 - 1;

            else
                left = mid1 + 1;
        }

        return -1;
    }
};