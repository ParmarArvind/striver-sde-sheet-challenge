class Solution {
public:
// method 1 tc=O(m+n) sc=O(m+n)
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        int first=0,second=0;
        while(first!=nums1.size() && second!=nums2.size())
        {
            if(nums1[first]<=nums2[second]) 
            {
                merge.push_back(nums1[first]);
                first++;
            }
            else 
            {
               merge.push_back(nums2[second]);
                second++; 
            }
        }
        while(first!=nums1.size())
        {
            merge.push_back(nums1[first]);
            first++;           
        }
        while(second!=nums2.size())
        {
            merge.push_back(nums2[second]);
             second++; 
        }

        if(merge.size()%2!=0)
        {
            int mid=merge.size()/2;
            return merge[mid];
        }
        //else
        int mid=merge.size()/2;
        double result= (merge[mid-1]+merge[mid])/2.0;
        return result;
        
    }
};


// method 2 tc=O(m+n) sc=O(1)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int count=0;
        int totalEle=nums1.size() + nums2.size();
        int first=0,second=0;
        double result=0;

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
            if(totalEle%2==0)
            {
                if(count==totalEle/2) result +=  isFromFirst ? nums1[first-1] : nums2[second-1];
                if(count-1==totalEle/2) result +=  isFromFirst ? nums1[first-1] : nums2[second-1];
            }
            else {
                if(count-1==totalEle/2) result +=  isFromFirst ? nums1[first-1]:nums2[second-1];
            }
        }
        while(first!=nums1.size())
        {
            first++; 
            count++;
            if(totalEle%2==0)
            {          
                if(count==totalEle/2) result += nums1[first-1];
                if(count-1==totalEle/2) result +=   nums1[first-1];
            }
            else  if(count-1==totalEle/2) result += nums1[first-1];
        }
        while(second!=nums2.size())
        {
            second++; 
            count++;
            if(totalEle%2==0)
            {          
                if(count==totalEle/2) result += nums2[second-1];
                if(count-1==totalEle/2) result +=  nums2[second-1];
            }
            else  if(count-1==totalEle/2) result += nums2[second-1];
        }
        
        
        return totalEle%2==0 ? result/2.0 : result;
    }
};


// method 3 tc=O(log(min(m,n))) sc=O(1)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size() ) return findMedianSortedArrays(nums2,nums1);
        int n=nums1.size();
        int m=nums2.size();

        int left=0;
        int right=n;

        while(left<=right)
        {
            int mid1=left+(right-left)/2;

            int mid2= (n+m+1)/2-mid1;

            int x1= mid1==0 ? INT_MIN : nums1[mid1-1];
            int x2= mid2==0 ? INT_MIN : nums2[mid2-1];

            int x3= mid1==n ? INT_MAX: nums1[mid1];
            int x4= mid2==m ? INT_MAX: nums2[mid2];

            if(x1<=x4 && x2<=x3) {
                if( (n+m )%2==1) {
                    return max(x1,x2);
                }
                else return (max(x1,x2) + min(x3,x4) )/2.0;
            }
            else if(x1>x4)
            {
                right=mid1-1;
            }
            else left=mid1+1;
        }

        return -1;
        
    }
};