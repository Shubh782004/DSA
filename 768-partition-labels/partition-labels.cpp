class Solution {
public:
    vector<int> partitionLabels(string s) {
    vector<int> ans;

    vector<pair<int, int>> stend(26, {-1, -1});

    // Store first and last occurrence
    for (int i = 0; i < s.size(); i++) {
        int x = s[i] - 'a';

        if (stend[x].first == -1)
            stend[x].first = i;

        stend[x].second = i;
    }

    int l = 0;

    while (l < s.size()) {
        int max_end = stend[s[l] - 'a'].second;
        int r = l;

        while (r <= max_end) {
            max_end = max(max_end, stend[s[r] - 'a'].second);
            r++;
        }

        ans.push_back(r - l);
        l = r;
    }

    return ans;
}
};