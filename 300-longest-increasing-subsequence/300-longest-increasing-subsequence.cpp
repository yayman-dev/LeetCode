class Solution {
public:
    int dp[2505];
    int lengthOfLIS(vector<int>& a) {
        int n = (int)a.size();
        for(int i = 0; i < n; i++){
            dp[i] = 1;
        }
        
        for(int i = 0; i < n; i++){
            for(int j = i - 1; j >= 0; j--){
                if(a[j] < a[i]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        
        int ans = 1;
        for(int i = 0; i < n; i++){
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};