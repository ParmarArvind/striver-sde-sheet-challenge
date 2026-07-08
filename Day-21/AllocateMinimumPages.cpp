// method 1 tc=O(nlogn) sc=O(1)
class Solution {
public:
    bool isSafe(vector<int>& arr, int k, long long pageLimit)
    {
        int count = 1;
        long long page = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > pageLimit ) return false;

            if (page + arr[i] > pageLimit)
            {
                count++;
                page = arr[i];
            }
            else page += arr[i];
            
        }
        return count <= k;
    }

    long long findPages(vector<int> &arr, int k)
    {
        if (k > arr.size()) return -1;
        long long left = *max_element(arr.begin(), arr.end());
        long long right = accumulate(arr.begin(), arr.end(), 0LL);

        long long result = -1;

        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            if (isSafe(arr, k, mid))
            {
                result = mid;
                right = mid - 1;
            }
            else left = mid + 1;
        }
        return result;
    }
};