/*
Chef and String

Chef has recently joined Exun, a member of the “We not I” legacy, so he wants to apply this motto to a string he received on his birthday!

Chef's string, denoted A, is very large. So, you are instead given a smaller string S of length N and a positive integer K. Chef's string is then represented by the string A = S + S + S + … + S (K times), where + denotes string concatenation. For example, if S = "EXUN" and K = 3, Chef's actual string is "EXUNEXUNEXUN". Note that the length of A is exactly N⋅K.

As a sign of respect for his club, Chef refuses to have the letter ‘I’ present in the string. So, Chef will replace every occurrence of 'I' in his string with any other uppercase English letter of his choice. Note that different occurrences of 'I' may be replaced with different characters: for example the string "IAIA" can be turned into "BACA" or "EAEA" or "JAVA" (or many other examples.)

Chef defines the score of a string to be the number of adjacent characters that are equal. Formally, the score of A equals the number of indices i (1 ≤ i < N⋅K) such that Ai = Ai+1.

Find the maximum possible score Chef's string can attain, after replacing every occurrence of 'I' with some other letter.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases. Each test case consists of two lines of input. The first line of each test case consists of two space-separated integers N and K — the length of S, and the number of times it must be repeated. The second line will contain the string S of length N.

Output Format
For each test case, output on a new line the maximum possible score of A.

Constraints
1 ≤ T ≤ 2⋅10^5
1 ≤ N ≤ 5⋅10^5
1 ≤ K ≤ 10^9
S contains uppercase English letters only, i.e. Si ∈ {’A’, ’B’, …, ’Z’}.
The sum of N over all test cases does not exceed 5⋅10^5.
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll max_pairs_linear(const string &s) {
    int n = (int)s.size();
    ll ans = 0;
    int i = 0;
    while (i < n) {
        if (s[i] == 'I') {
            int j = i;
            while (j+1 < n && s[j+1] == 'I') ++j;
            int L = j - i + 1;
            bool left_exists = (i-1 >= 0 && s[i-1] != 'I');
            bool right_exists = (j+1 < n && s[j+1] != 'I');
            if (left_exists && right_exists) {
                if (s[i-1] == s[j+1]) ans += L + 1;
                else ans += L;
            } else if (left_exists || right_exists) {
                ans += L;
            } else {
                ans += max(0, L - 1);
            }
            i = j + 1;
        } else {
            if (i+1 < n && s[i+1] != 'I' && s[i] == s[i+1]) ans++;
            i++;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        long long N, K;
        cin >> N >> K;
        string S;
        cin >> S;

        ll f1 = max_pairs_linear(S);
        string SS = S + S;
        ll f2 = max_pairs_linear(SS);

        ll ans;
        if (K == 1) ans = f1;
        else ans = f1 * K + (f2 - 2 * f1) * (K - 1);

        cout << ans << '\n';
    }
    return 0;
}