class Solution {
  public:
    string uncommonChars(string s1, string s2) {
        unordered_set<char> a, b;

        for (char ch : s1)
            a.insert(ch);

        for (char ch : s2)
            b.insert(ch);

        string ans;

        for (char ch : a) {
            if (b.find(ch) == b.end())
                ans += ch;
        }

        for (char ch : b) {
            if (a.find(ch) == a.end())
                ans += ch;
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};