class Solution {
public:
    bool isIsomorphic(string s1, string s2) {
        if (s1.length() != s2.length()) return false;

        unordered_map<char, char> mp1, mp2;

        for (int i = 0; i < s1.length(); i++) {
            if (mp1.find(s1[i]) != mp1.end()) {
                if (mp1[s1[i]] != s2[i]) return false;
            } else {
                mp1[s1[i]] = s2[i];
            }

            if (mp2.find(s2[i]) != mp2.end()) {
                if (mp2[s2[i]] != s1[i]) return false;
            } else {
                mp2[s2[i]] = s1[i];
            }
        }

        return true;
    }
};