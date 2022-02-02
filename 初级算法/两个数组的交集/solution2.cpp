#include<vector>
#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        if (nums1.empty() || nums2.empty()) {
            return result;
        }

        map<int, int> m;
        for (vector<int>::iterator it = nums1.begin(); it != nums1.end(); it++) {
            m[*it]++;
        }

        for (vector<int>::iterator it = nums2.begin(); it != nums2.end(); it++) {
            if (m[*it]) {
                result.push_back(*it);
                m[*it]--;
            }
        }

        return result;
    }
};