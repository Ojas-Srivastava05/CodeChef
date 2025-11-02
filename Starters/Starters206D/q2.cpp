/*
Expensive Buying

Chef is in a shop with N distinct items. The i-th item is sold at a price of C_i.

Chef only wants expensive items, and so he has decided that he will buy the K most expensive items. Find how much total cost Chef had to pay to buy the K most expensive items.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains 2 integers - N and K.
The second line contains N integers - C1, C2, …, CN.

Output Format
For each test case, output on a new line the total cost to buy K most expensive items.

Constraints
1 ≤ T ≤ 100
1 ≤ K ≤ N ≤ 100
1 ≤ C_i ≤ 100
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int sum=0;
        for(int i=n-1;i>=(n-k);i--)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
