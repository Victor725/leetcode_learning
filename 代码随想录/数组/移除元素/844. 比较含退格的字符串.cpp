#include "global.h"

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }
    string build(string s) {
        string res;
        for (int i = 0; i < s.size(); i++) {
            if (!res.empty() && s[i]=='#') {
                res.pop_back();
            }
            else if(s[i] != '#') {
                res.push_back(s[i]);
            }
        }
        return res;
    }
};