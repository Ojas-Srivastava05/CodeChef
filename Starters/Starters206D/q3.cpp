/*
Prime Sum

Chef has an integer array A of length N such that 1 ≤ A_i ≤ 3.

Chef is wondering how many pairs exist in his array, which have a prime sum. Formally, find the number of pairs (i, j) such that

1 ≤ i < j ≤ N
A_i + A_j is prime.

X is a prime integer if it is not 1, and has no other divisor except 1 and X. For example, 2, 13 and 97 are prime integers, while 1 and 4 are not.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer N.
The second line contains N integers - A1, A2, …, AN.

Output Format
For each test case, output on a new line the number of pairs with prime sums.

Constraints
1 ≤ T ≤ 100
1 ≤ N ≤ 100
1 ≤ A_i ≤ 3
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>A(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[A[i]]++;
	    }
	    int sum=0;
	    sum=(mp[1]*(mp[1]-1))/2+mp[1]*mp[2]+mp[2]*mp[3];
	    cout<<sum<<endl;
	}
	return 0;

}
