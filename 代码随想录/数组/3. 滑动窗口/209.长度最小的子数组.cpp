#include "global.h"

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int sublen = 0;
        int i = 0;
        int result = INT32_MAX;

        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];
            while (sum >= target) {
                sublen = j - i + 1;
                result = result < sublen ? result : sublen;
                sum -= nums[i++];
            }
        }
        return result = result == INT32_MAX ? 0 : result;
    }
};