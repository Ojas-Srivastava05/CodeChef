/*
    Episodes
    Chef just started a new series on Netflix. This series has a total of N episodes, each of which is K minutes long.

    Chef wonders what is the total time that it will take him to watch this series from start to finish. Assume that Chef does not need breaks in the middle.

    You need to find the answer in terms of hours and minutes, for example, 140 minutes should be 2 hours and 20 minutes. More specifically, the output of H hours and M minutes is considered valid only if 0 ≤ M < 60.

    Input Format
    The first line of input will contain a single integer T, denoting the number of test cases.
    The first and only line of each test case contains 2 integers - N and K.
    Output Format
    For each test case, output on a new line 2 integers - H and M, the number of hours and minutes it will take to watch the whole series. 0 ≤ H and 0 ≤ M < 60.

    Constraints
    1 ≤ T ≤ 1800
    1 ≤ N ≤ 30
    1 ≤ K < 60
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
        int total=n*k;
        int hours=total/60;
        int mins=total%60;
        cout<<hours<<" "<<mins<<endl;
    }
    return 0;
    
}
