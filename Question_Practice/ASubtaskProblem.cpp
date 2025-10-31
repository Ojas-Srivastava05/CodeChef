/*
A Subtask Problem
Chef recently solved his first problem on CodeChef. The problem he solved has N test cases. He gets a score for his submission according to the following rules:

If Chef’s code passes all the N test cases, he gets 100 points.

If Chef’s code does not pass all the test cases, but passes all the first M (M<N) test cases, he gets K (K<100) points.

If the conditions 1 and 2 are not satisfied, Chef does not get any points (i.e his score remains at 0 points).

You are given a binary array A1, A2, …, AN of length N, where Ai=1 denotes Chef's code passed the ith test case, Ai=0 denotes otherwise. You are also given the two integers M, K. Can you find how many points does Chef get?

Input Format
First line will contain T, number of testcases. Then the testcases follow.
The first line of each test case contains three space-separated integers N, M, K.
The second line contains N space-separated integer A1, A2, …, AN.

Output Format
For each testcase, output in a single line the score of Chef.

Constraints
1 ≤ T ≤ 100
2 ≤ N ≤ 100
1 ≤ M < N
1 ≤ K < 100
0 ≤ Ai ≤ 1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>a(n);
        int one=0;
        int zero=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            one++;
        }
        
        if(one==n)
        cout<<100;
        else
        {
            int start=0;
            for(int i=0;i<m;i++)
            {
                if(a[i]==1)
                start++;
            }
            if(start==m)
            cout<<k;
            else
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
