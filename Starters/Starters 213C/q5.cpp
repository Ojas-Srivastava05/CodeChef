/*
    Mean Difference (Easy)
    This is the easy version of the problem. The only difference between this and the hard version is that here, you must find the answer for only the given array.

    For an array B of length M, we define the following:

    avg(B) is the average of B, rounded down.
    Formally, avg(B) = ⌊ (B_1 + B_2 + … + B_M) / M ⌋
    where ⌊x⌋ denotes the largest integer not exceeding x, also called the floor function.
    f(B) is the maximum difference between an element of B and avg(B).
    That is, f(B) = max_{i=1 to M} |B_i - avg(B)|
    Here, |x| denotes the absolute value of x. For example |3| = 3 and |-2| = 2.

    You are given an array A of length N.
    Compute the maximum value of f(S) across all non-empty subsequences† S of A.

    † S is said to be a subsequence of A if S can be obtained from A by deleting several (possibly zero or all) elements. For example, [1,3], [1,2,3], and [2,3] are subsequences of [1,2,3], whereas [3,1] and [2,1,3] are not.

    Input Format
    The first line of input will contain a single integer T, denoting the number of test cases.
    Each test case consists of two lines of input.
    The first line of each test case contains a single integer N, denoting the length of the array A.
    The second line contains N space-separated integers A_1, A_2, …, A_N.
    Output Format
    For each test case, output on a new line one integer: the maximum value of f(S) for some subsequence of A.

    Constraints
    1 ≤ T ≤ 10^5
    1 ≤ N ≤ 2⋅10^5
    1 ≤ A_i ≤ 10^9
    The sum of N over all test cases won't exceed 2⋅10^5.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>
#include <cstdlib>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        std::vector<long long> A(N);
        for (int i = 0; i < N; ++i) std::cin >> A[i];

        std::sort(A.begin(), A.end());
        std::vector<long long> pref(N + 1, 0);
        for (int i = 0; i < N; ++i) pref[i + 1] = pref[i] + A[i];
        long long total = pref[N];

        long long best = 0;

        for (int k = 1; k <= N; ++k) {
            {
                long long v = A[N - 1];
                long long sumOthers = (k - 1 > 0) ? pref[k - 1] : 0LL;
                long long meanFloor = (v + sumOthers) / k;
                long long diff = std::llabs(v - meanFloor);
                if (diff > best) best = diff;
            }
            {
                long long v = A[0];
                long long sumOthers = (k - 1 > 0) ? (total - pref[N - (k - 1)]) : 0LL;
                long long meanFloor = (v + sumOthers) / k;
                long long diff = std::llabs(v - meanFloor);
                if (diff > best) best = diff;
            }
        }

        std::cout << best << '\n';
    }

    return 0;
}
