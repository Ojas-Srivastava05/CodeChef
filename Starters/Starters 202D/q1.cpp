/*
Endless Play
Chef's most anticipated game, Empty Knight: Wool Aria, released on September 4-th at midnight.

Since the instant it released, Chef has been playing it non-stop, and completely lost track of time.

If the current date is the X-th of September, and the current time is H hours past midnight, how many hours has Chef been playing?

Note that each day has 24 hours.

Input Format
The first and only line of input consists of two space-separated integers X and H — the current date, and the current time (in hours past midnight).
Output Format
Output a single integer: the number of hours Chef has been playing for.

Constraints
4 ≤ X ≤ 30
0 ≤ H < 24
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,h;
    cin>>x>>h;
    int rem=x-4;
    cout<<(rem*24)+h<<endl;
    return 0;
}
