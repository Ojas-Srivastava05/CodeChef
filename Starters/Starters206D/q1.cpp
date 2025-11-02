/*
Remaining Money
Chef had N rupees with him.

He decided to buy A ice creams for his friends, each at a cost of B rupees. He was able to pay the entire amount.

Find how many rupees Chef still has left with him at the end?

Input Format
The first and only line of input contains 3 integers - N, A and B.

Output Format
For each test case, output on a new line the amount of rupees Chef has left.

Constraints
1 ≤ N ≤ 1000
1 ≤ A, B ≤ 100
A ⋅ B ≤ N
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b;
    cin>>n>>a>>b;
    cout<<n-(a*b);
    return 0;
}