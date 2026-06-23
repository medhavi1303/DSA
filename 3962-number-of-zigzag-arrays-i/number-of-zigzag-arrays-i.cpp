class Solution {
public:
    static constexpr int MOD = 1e9 + 7;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        vector<int> up(m + 2), down(m + 2);
        vector<int> newUp(m + 2), newDown(m + 2);
        vector<int> pref(m + 2), suff(m + 3);

        for (int v = 1; v <= m; v++) {
            up[v] = v - 1;
            down[v] = m - v;
        }

        for (int len = 3; len <= n; len++) {

            pref[0] = 0;
            for (int v = 1; v <= m; v++) {
                pref[v] = pref[v - 1] + down[v];
                if (pref[v] >= MOD) pref[v] -= MOD;
            }

            suff[m + 1] = 0;
            for (int v = m; v >= 1; v--) {
                suff[v] = suff[v + 1] + up[v];
                if (suff[v] >= MOD) suff[v] -= MOD;
            }

            for (int v = 1; v <= m; v++) {
                newUp[v] = pref[v - 1];
                newDown[v] = suff[v + 1];
            }

            up.swap(newUp);
            down.swap(newDown);
        }

        long long ans = 0;
        for (int v = 1; v <= m; v++) {
            ans += up[v];
            ans += down[v];
        }

        return (int)(ans % MOD);
    }
};