class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows) {
            return s;
        }

        string result = "";
        int n = s.length();
        int cycleLen = 2 * numRows - 2;

        for (int r = 0; r < numRows; ++r) {
            for (int i = 0; i + r < n; i += cycleLen) {
                result += s[i + r];

                int diagIdx = i + cycleLen - r;
                if (r != 0 && r != numRows - 1 && diagIdx < n) {
                    result += s[diagIdx];
                }
            }
        }

        return result;
    

        
    }
};