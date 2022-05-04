#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length = nums.size();
        int left = 0, right = length - 1, ans = length;
        while (left <= right) {
            int middle = ((right - left) >> 1) + left;  //·ÀÖ¹Òç³ö
            if (nums[middle] >= target) {
                ans = middle;
                right = middle - 1;
            }
            else if (nums[middle] < target) {
                left = middle + 1;
            }
        }
        return ans;
    }
};