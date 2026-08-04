class Solution {
public:
std::vector<int> findMissingElements(std::vector<int>& nums) {
        int mn = *std::min_element(nums.begin(), nums.end());
        int mx = *std::max_element(nums.begin(), nums.end());
        
        std::unordered_set<int> present(nums.begin(), nums.end());
        std::vector<int> result;
        
        for (int i = mn + 1; i < mx; ++i) {
            if (present.find(i) == present.end()) {
                result.push_back(i);
            }
        }
        
        return result;
    
    }
};