class Solution {
public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {

        int n = val.size();

        vector<pair<double,int>> arr(n);

        for(int i = 0; i < n; i++)
        {
            double weight = wt[i];
            double value = val[i];

            double frac = value / weight;

            arr[i] = {frac, i};
        }

        sort(arr.begin(), arr.end());

        double result = 0;
        for(int i = n - 1; i >= 0 && capacity > 0; i--)
        {
            int idx = arr[i].second;
            if(wt[idx] <= capacity)
            {
                result += val[idx];
                capacity -= wt[idx];
            }else
            {
                result += arr[i].first * capacity;
                break;
            }
        }

        return result;
    }
};