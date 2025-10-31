/*
Make them equal

Chef has an array A having N elements. Chef wants to make all the elements of the array equal by repeating the following move.

Choose any integer K between 1 and N (inclusive). Then choose K distinct indices i1, i2, …, iK, and increase the values of A[i1], A[i2], …, A[iK] by 1.

Find the minimum number of moves required to make all the elements of the array equal.

Input Format:
- The first line contains T denoting the number of test cases. Then the test cases follow.
- The first line of each test case contains a single integer N denoting the number of elements in A.
- The second line of each test case contains N space separated integers A1, A2, …, AN.

Output Format:
- For each test case, print a single line containing one integer denoting the minimum number of moves required to make all the elements of the array equal.

Constraints:
- 1 ≤ T ≤ 10^4
- 1 ≤ N ≤ 10^5
- 1 ≤ A[i] ≤ 10^5
- The sum of N over all test cases does not exceed 10^5.
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
        vector<int>temp(n);
        for(int i=0;i<n;i++)
        {
            cin>>temp[i];
        }
        sort(temp.begin(),temp.end());
        cout<<temp[n-1]-temp[0]<<endl;
    }
    return 0;
}
