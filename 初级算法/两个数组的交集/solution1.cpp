#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        if (nums1.empty() || nums2.empty()) {
            return result;
        }
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;
        int l1 = nums1.size(), l2 = nums2.size();
        while (i != l1 && j != l2) {
            if (nums1[i] < nums2[j]) {
                i++;
                continue;
            }
            else if (nums1[i] == nums2[j]) {
                result.push_back(nums1[i]);
                i++;
                j++;
                continue;
            }
            else {
                j++;
                continue;
            }
        }
        return result;
    }
};