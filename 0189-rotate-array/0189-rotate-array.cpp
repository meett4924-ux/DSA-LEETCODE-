class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        int i = 0;
        int temp[n-k];
        int j= n-k;
        int q = 0;
        for (i=0; i<j; i++ ) 
        {
            temp [i] = nums[i];

        }

        for ( int p = j ; p<n; p++){

            nums[p-j] = nums[p];

        }
        for (i=k ; i<n ; i++)
        {
            nums[i] = temp[q];
            q++;


        
        }
    }
};