class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n = stoneValue.size();
        
        int dp1 = 0, dp2 = 0, dp3 = 0;

        for (int i = n - 1; i >= 0; --i) {
            int sum = 0;
            int maxDiff = -1e9;

            sum += stoneValue[i];
            maxDiff = max(maxDiff, sum - dp1);

            if (i + 1 < n) {
                sum += stoneValue[i + 1];
                maxDiff = max(maxDiff, sum - dp2);
            }

            if (i + 2 < n) {
                sum += stoneValue[i + 2];
                maxDiff = max(maxDiff, sum - dp3);
            }

            dp3 = dp2;
            dp2 = dp1;
            dp1 = maxDiff;
        }

        if (dp1 > 0) return "Alice";
        if (dp1 < 0) return "Bob";
        return "Tie";
    }
};
        
        
 