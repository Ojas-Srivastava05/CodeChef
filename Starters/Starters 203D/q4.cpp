/*
    Maximum MST
    There was a weighted undirected complete graph on N vertices with M = N⋅(N−1)/2 edges, one edge between every pair of vertices.

    Unfortunately, the weights have been scrambled, and while we have recovered the multiset of weights, we do not know which edge had which weight. You are given a sequence W_1, W_2, …, W_M.

    Among all possible assignments of weights, what is the maximum possible value of the minimum spanning tree†?

    † The minimum spanning tree is a subset of N−1 edges, with minimum sum of weights in the subset, such that it is possible to reach any vertex from any other vertex using only edges in this subset.

    Input Format
    The first line of input will contain a single integer T, denoting the number of test cases.
    Each test case consists of multiple lines of input.
    The first line of each test case contains N - the number of vertices in the graph.
    The second line contains M integers - W_1, W_2, …, W_M.
    Output Format
    For each test case, output on a new line the maximum possible value of minimum spanning tree over all assignments of weights.

    Constraints
    1 ≤ T ≤ 100
    2 ≤ N ≤ 50
    1 ≤ W_i ≤ 10^7
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long m=(n*(n-1))/2;
        vector<long long>a(m);
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        
        sort(a.begin(),a.end());
        
        int skip=0;
        int v=0;
        int sum=0;
        for(int i=0;i<m;i++)
        {
            if(skip==0)
            {
                sum+=a[i];
                skip=v;
                v++;
            }
            else
            {
                skip-=1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
