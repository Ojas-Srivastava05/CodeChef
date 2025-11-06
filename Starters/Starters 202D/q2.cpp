/*
Two Rolls
Chef is playing a board game, and is currently at position X.
To win, he needs to reach position 50.

Chef has a pair of 6-sided dice, which will decide how he moves - he will roll the pair of dice, sum up the numbers on them, and then move exactly that many steps forward.
More precisely, if the dice show values of d1 and d2, Chef must move from X to (X + d1 + d2).

However, Chef's dice are a bit weird: rather than starting from 1, they start from Y.
That is, the values on a single die are Y, Y+1, Y+2, Y+3, Y+4, Y+5.

Is it possible for Chef to win the game by reaching position 50, after exactly one turn?
Note that Chef must exactly land on position 50 after his move - going beyond it does not count as a win.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first line and only of each test case contains two space-separated integers X and Y — the current position of Chef and the starting value on the dice, respectively.
Output Format
For each test case, output on a new line the answer: Yes if Chef can reach position 50 in exactly one turn, and No otherwise.

Each character of the output may be printed in either uppercase or lowercase, i.e. the strings NO, No, nO, and no will all be treated as equivalent.

Constraints
1 ≤ T ≤ 2500
1 ≤ X < 50
1 ≤ Y ≤ 50
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int sum_needed = 50 - x;
        int min_sum = 2 * y;
        int max_sum = 2 * y + 10;
        
        if (sum_needed >= min_sum && sum_needed <= max_sum)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}