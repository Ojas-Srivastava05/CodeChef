/*
Profits

Chef is running a lemonade stand, and each lemonade costs him Rs. X to make.

Chef will have N total customers coming to his lemonade stand today, with the 
i-th customer willing to spend Rs. i on a lemonade. So, the first customer is 
willing to spend Rs. 1, the second Rs. 2, the third Rs. 3 and so on.

For each customer, Chef can choose whether to accept and provide him with 
lemonade (at the amount he is willing to pay), or reject him. Find the maximum 
profit Chef can make. Ignore any other costs.

Input Format:
- The first line of input will contain a single integer T, denoting the number 
  of test cases.
- The first and only line of each test case contains 2 integers - N and X.

Output Format:
For each test case, output on a new line the maximum profit Chef can make.

Constraints:
- 1 ≤ T ≤ 100
- 1 ≤ N, X ≤ 100
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
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(x>=n)
        {
        cout<<0<<endl;
        continue;
        }
        int profit=0;
        for(int i=x;i<=n;i++)
        {
            profit+=(i-x);
        }
        cout<<profit<<endl;

    }
    return 0;
}