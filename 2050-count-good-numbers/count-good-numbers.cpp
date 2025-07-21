class Solution {
public:
    const int mod = 1e9 + 7;

    long long powerof(long long x, long long n) {
        if (n == 0) return 1;
        long long half = powerof(x, n / 2);
        long long ans = (half * half) % mod;
        if (n % 2) {
            ans = (ans * x) % mod;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long num_of_even = (n + 1) / 2;
        long long num_of_odd = n / 2;
        long long good_num = (powerof(5, num_of_even) * powerof(4, num_of_odd)) % mod;
        return (good_num);
    }
};
