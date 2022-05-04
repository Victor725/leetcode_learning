#include "global"

class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x, ans = x;
        while (left <= right) {
            int middle = ((right - left) >> 1) + left;
            if ((long long)middle * middle <= x) {
                ans = middle;
                left = middle + 1;
            }
            else {
                right = middle - 1;
            }
        }
        return ans;
    }
};