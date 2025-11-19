/*
    Cab Rides
    Chef and his family is trying to reach the airport. Including Chef, they are a total of N members.

    A single cab ride costs max(200, 100⋅X) rupees to transport X people from Chef's home to the airport. Further, a cab can fit at most 4 people.

    Chef may have to book multiple cabs in order for his entire family to reach the airport. What is the minimum cost for Chef's family to reach the airport if they take cabs optimally?

    Input Format
    The first line of input will contain a single integer T, denoting the number of test cases.
    The first and only line of each test case contains a single integer N - the number of people in Chef's family.
    Output Format
    For each test case, output on a new line the minimum cost.

    Constraints
    1 ≤ T ≤ 50
    1 ≤ N ≤ 50
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
        if(n>=2)
        {
            cout<<n*100<<endl;
            continue;
        }
        if(n==1)
        {
            cout<<200<<endl;
        }
        
    }
    return 0;
}
