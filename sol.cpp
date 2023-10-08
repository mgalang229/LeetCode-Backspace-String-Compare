class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> vec1, vec2;
        for (int i = 0; i < (int) s.size(); i++) {
            if (s[i] == '#' && !vec1.empty())
                vec1.pop_back();
            else if (s[i] != '#')
                vec1.push_back(s[i]);
        }
        for (int i = 0; i < (int) t.size(); i++) {
            if (t[i] == '#' && !vec2.empty())
                vec2.pop_back();
            else if (t[i] != '#')
                vec2.push_back(t[i]);
        }
        // for (char c : vec1)
        //     cout << c << " ";
        // cout << "\n";
        // for (char c : vec2)
        //     cout << c << " ";
        // cout << "\n";
        if ((int) vec1.size() != (int) vec2.size()) {
            return false;
        }
        for (int i = 0; i < (int) vec1.size(); i++)
            if (vec1[i] != vec2[i])
                return false;
        return true;
    }
};
