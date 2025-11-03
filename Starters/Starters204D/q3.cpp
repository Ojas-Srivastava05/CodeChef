/*
Drawing Chances
Alice and Bob are playing a tournament which consists of N matches.

Right now, they have completed M (1 ≤ M ≤ N) matches already, and you have the results from those matches. You are given a binary string S of length M, where S_i = 1 means that Alice won the i-th match and S_i = 0 if Bob won the i-th match.

At the end, whoever has won more matches wins the tournament. However, if both of them win equal number of matches, the tournament ends in a tie instead.

Given the matches that have already been played, is it still possible for the tournament to end in a tie? Print Yes if it is possible, and No otherwise.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains 2 integers - N and M, the number of total matches to play, and the matches already played.
The second line contains a binary string S.
Output Format
For each test case, output on a new line Yes if it is possible to still have a draw and No otherwise.

Constraints
1 ≤ T ≤ 100
1 ≤ M ≤ N ≤ 100
S_i ∈ {0, 1}
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>n>>m;
        string S;
        cin>>S;
        int alice=0;
        int bob=0;
        if(n%2==1)
        {
            cout<<"No"<<endl;
            continue;
        }
        for(int i=0;i<m;i++)
        {
            if(S[i]=='1')
            alice++;
            else
            bob++;
        }
        if((n-m)>=abs(alice-bob))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}
