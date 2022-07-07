#include "global.h"

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0;
        int maxlen = 0;
        unordered_map<int, int> mp;
        for (int j = 0; j < fruits.size(); j++) {
            mp[fruits[j]]++;
            while (mp.size() > 2) {
                mp[fruits[i]]--;
                if (mp[fruits[i]] == 0) {
                    mp.erase(fruits[i]);
                }
                i++;
            }
            maxlen = maxlen < (j - i + 1) ? (j - i + 1) : maxlen;
        }
        return maxlen;
    }
};