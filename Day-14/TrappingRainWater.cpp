class Solution {
public:
    int trap(vector<int>& height) {
        int n =height.size();
        vector<int> leftMaxHeight(n,0);
        vector<int> rightMaxHeight(n,0);

        leftMaxHeight[0]=height[0];
        for(int i=1;i<n;i++)
            leftMaxHeight[i]=max(leftMaxHeight[i-1],height[i]);

        rightMaxHeight[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
            rightMaxHeight[i]=max(rightMaxHeight[i+1],height[i]);

        int totalWater=0;
        for(int i=0;i<n;i++)
        {
            int temp= min(rightMaxHeight[i],leftMaxHeight[i]) - height[i];
            totalWater += temp>0 ? temp: 0;
        }
        return totalWater;

    }
};