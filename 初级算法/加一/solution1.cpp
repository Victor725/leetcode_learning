#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        digits[i]++;
        while (digits[i] == 10) {
            if (i == 0) {
                digits.insert(digits.begin(), 0);
                i++;
            }
            digits[i] = 0;
            digits[i - 1]++;
            i--;
        }
        return digits;
    }
};