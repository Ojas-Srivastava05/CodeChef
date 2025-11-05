#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        
        // frequency map of remaining values (ordered)
        map<long long, int> freq;
        for (auto v : a) freq[v]++;

        long long S = 0;
        long long H = 0;
        vector<long long> ans;
        ans.reserve(n);

        for (int step = 0; step < n; ++step) {
            // If only one distinct value left and it equals S, forced to take it
            if (freq.size() == 1 && freq.begin()->first == S) {
                long long val = freq.begin()->first;
                ans.push_back(val);
                if (val != S) ++H;
                S += val;
                if (--freq[val] == 0) freq.erase(val);
                continue;
            }

            // Otherwise, choose a key != S.
            // Prefer the largest key that is not equal to S (deterministic choice).
            auto it = prev(freq.end()); // largest key
            if (it->first == S) {
                // largest equals S, choose the second largest
                auto it2 = it;
                --it2;
                long long val = it2->first;
                ans.push_back(val);
                if (val != S) ++H;
                S += val;
                if (--freq[val] == 0) freq.erase(val);
            } else {
                // largest != S, pick it
                long long val = it->first;
                ans.push_back(val);
                if (val != S) ++H;
                S += val;
                if (--freq[val] == 0) freq.erase(val);
            }
        }

        // (Optional) we could also print H to debug, but problem asks to print ordering.
        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << ans[i];
        }
        cout << '\n';
    }

    return 0;
}