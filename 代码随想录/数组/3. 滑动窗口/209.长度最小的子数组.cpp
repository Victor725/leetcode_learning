#include "global.h"

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                if (sum >= target) {
                    if (minlen == 0) {
                        minlen = j - i + 1;
                    }
                    else {
                        minlen = minlen < (j - i + 1) ? minlen : j - i + 1;
                    }
                    break;
                }
            }
        }
        return minlen;
    }
};