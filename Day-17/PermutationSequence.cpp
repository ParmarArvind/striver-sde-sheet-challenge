// method -1, i used backtracking to find the k-th permutation
class Solution {
public:
    string result;
    void solve(vector<char>& arr, vector<bool>& visited, int &count,
               int k, string &curr)
    {
        if(result.size()) return;   // Stop once k-th permutation is found

        if(curr.size() == arr.size())
        {
            count++;
            if(count == k) result = curr;
            return;
        }

        for(int i = 0; i < arr.size(); i++)
        {
            if(visited[i]) continue;

            visited[i] = true;
            curr.push_back(arr[i]);

            solve(arr, visited, count, k, curr);

            curr.pop_back();
            visited[i] = false;
        }
    }

    string getPermutation(int n, int k) {
        vector<char> arr;
        for(int i = 1; i <= n; i++)
            arr.push_back(i + '0');

        vector<bool> visited(n, false);

        result = "";
        int count = 0;
        string curr;

        solve(arr, visited, count, k, curr);

        return result;
    }
};

class Solution {
public:
// method -2 , i used the rank finding concept of a word here
    string result;
    int dp[10];
    int fac(int num)
    {
        if(num<=1) return dp[num]=1;
        if(dp[num]!=-1) return dp[num];
        return dp[num]=num*fac(num-1);
    }
    void solve(int n,int k,int &count,unordered_set<int>&st)
    {
        if(count==k) return ;
        for(int i = 1; i <=n; i++)
        {
            if(st.count(i)) continue;
            int allPossible=fac(n-st.size()-1);
            if(count+allPossible>=k)
            {
                result.push_back(i+'0');
                st.insert(i);
                solve(n,k,count,st);
                break;
            }
            else {
                count+=allPossible;
            }
        }
    }

    string getPermutation(int n, int k) {
        unordered_set<int>st;
        memset(dp,-1,sizeof(dp));
        int count=0;
        solve( n, k, count,st);

        return result;
    }
};