/*
Minimize Sum
You have an array A of N integers, and an integer M such that 0 ≤ A_i < M.

You can do the following operation as many times as you want:

Set A_i = (A_i + 1) mod M for all indices i (1 ≤ i ≤ N).
Find the minimum possible sum of the array A after doing the above operation some number of times.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains 2 integers - N and M, the size of the array and the modulo.
The second line contains N integers - A_1, A_2, …, A_N.
Output Format
For each test case, output on a new line the minimum possible sum after some operations.

Constraints
1 ≤ T ≤ 10^4
1 ≤ N, M ≤ 2⋅10^5
0 ≤ A_i < M
The sum of N and the sum of M both do not exceed 2⋅10^5 over all test cases.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<long long> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        sort(A.begin(), A.end());
        long long sumA = accumulate(A.begin(), A.end(), 0LL);
        long long ans = sumA;

        for (int i = 0; i < N; i++) {
            long long x = M - A[i];
            long long k = N - i;
            long long curr = sumA + N * x - M * k;
            ans = min(ans, curr);
        }

        cout << ans << "\n";
    }
}