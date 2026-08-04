class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int j=1;
       int n=nums.size();
        int cnt = 0;
        int mx = 0;
       for ( int i=0; i<n; i++){
        if ( j== nums[i]) cnt++;
            else {
                    mx= max(mx,cnt);
                    cnt =0;

            }

       }   
       mx= max(mx,cnt);

    return mx;

    }
};