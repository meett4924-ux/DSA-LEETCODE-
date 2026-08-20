class Solution {
public:
    int minEatingSpeed(std::vector<int>& piles, int h) {
    int left =1;
    int right = *std::max_element(piles.begin(),piles.end());
    int ans  = right;

    while (left <= right){
        int mid = left+ (right - left ) / 2;
        long long totalhours = 0;

        for (int pile : piles) {
            totalhours += (pile + mid -1LL) / mid;

        }
        if (totalhours <=h) {
            ans = mid;
            right = mid -1;

    }  
    else {
        left = mid +1;
           


    }  
     


    }
      return ans ;
}
};