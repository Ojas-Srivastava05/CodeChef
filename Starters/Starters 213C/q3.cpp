/*
Separation

You are given an array A = [A1, A2, …, AN] of length N, as well as an integer X.

X is said to be separated if there exists at least one index i (1 ≤ i < N) such that:

- Ai < X and Ai+1 > X, or
- Ai > X and Ai+1 < X.

That is, X is said to be separated if A contains a pair of adjacent elements with one of them being strictly less than X and the other being strictly larger than X.

You can freely rearrange the elements of A however you like. Is it possible to make X not separated?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases. Each test case consists of two lines of input. The first line of each test case contains two space-separated integers N and X — the length of the array and the parameter X. The second line contains N space-separated integers A1, A2, …, AN — the elements of the array.

Output Format
For each test case, output on a new line the answer: Yes if a valid rearrangement exists, and No otherwise. Each character of the output may be printed in either upper case or lower case, i.e. the strings NO, No, nO, and no will all be treated as equivalent.

Constraints
1 ≤ T ≤ 10^5
2 ≤ N ≤ 2⋅10^5
1 ≤ Ai, X ≤ 10^9
The sum of N over all test cases won't exceed 2⋅10^5.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        bool hasLess = false, hasGreater = false, hasEqual = false;
        for (int i = 0; i < n; ++i) {
            long long a; cin >> a;
            if (a < x) hasLess = true;
            else if (a > x) hasGreater = true;
            else hasEqual = true;
        }
        if (hasLess && hasGreater && !hasEqual) cout << "No\n";
        else cout << "Yes\n";
    }
    return 0;
}