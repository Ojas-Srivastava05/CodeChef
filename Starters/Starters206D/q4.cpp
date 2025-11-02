/*
Gladiator Fighting

Problem Description:
There are N gladiators standing in a field. They will fight until only 1 gladiator is left, and the other N-1 gladiators have been defeated.

Initially, everyone has a skill factor of 0. But, every fight that a gladiator wins, his skill factor increases by 1.

There will be exactly N-1 rounds. Each round, 2 gladiators (not yet defeated) will come and fight; one will win, and the other will be defeated. The entertainment level of a fight between gladiators of skill level X and Y is X + Y. Note that it is possible for the lower skill gladiator to win.

What is the minimum and maximum possible total sum of entertainment level over all fights?

Input Format:
The first line of input will contain a single integer T, denoting the number of test cases.
For each test case, the first and only line contains a single integer N.

Output Format:
For each test case, output 2 integers - the minimum and maximum possible sums of entertainment levels.

Constraints:
1 ≤ T ≤ 99
2 ≤ N ≤ 100
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int minSum = N - 2;
        int maxSum = (N - 1) * (N - 2) / 2;
        cout << minSum << " " << maxSum << "\n";
    }
    return 0;
}