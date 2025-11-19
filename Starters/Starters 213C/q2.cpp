/*
No 4 Please

An array B of length M is said to be good if no two elements from different indices sum to 4. That is, B is good if for every pair (i, j) satisfying 1 ≤ i < j ≤ M, we have (Bi + Bj) ≠ 4.

You are given an array A of length N such that 1 ≤ Ai ≤ 3 for each index i.

You would like to make A a good array. To achieve this, you can repeatedly choose a single element of A and delete it. What's the minimum number of deletions needed to make A a good array?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases. Each test case consists of two lines of input. The first line of each test case contains a single integer N — the length of the array. The second line contains N space-separated integers A1, A2, …, AN — the elements of the array.

Output Format
For each test case, output on a new line the answer: the minimum number of element deletions needed to make A a good array.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 100
1 ≤ Ai ≤ 3
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int,int> mp;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        int c1 = mp[1];
        int c2 = mp[2];
        int c3 = mp[3];

        
        int remove13 = min(c1, c3);

       
        int remove22 = max(0, c2 - 1);

        cout << remove13 + remove22 << endl;
    }
    return 0;
}