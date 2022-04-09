#include "global.h"

class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 0, right = num;
        while (left <= right) {
            int middle = ((right - left) >> 1) + left;
            if ((long long)middle * middle < num) {
                left = middle + 1;
            }
            else if ((long long)middle*middle > num) {
                right = middle - 1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};