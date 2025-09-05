class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int hash[10] = {0};
        string s = to_string(n);
        for (char c : s) {
            hash[c - '0']++;
        }
        int min_freq = INT_MAX;
        int result = -1;
        for (int i = 0; i < 10; i++) {
            if (hash[i] != 0 && hash[i] < min_freq) {
                min_freq = hash[i];
                result = i;
            }
        }

        return result;
    }
};
