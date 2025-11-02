/*
Spring Cleaning
Chef is now performing a thorough cleaning of every room in his house.

Chef's house has X small rooms and Y large rooms.
Each small room requires 30 minutes to clean, and each large room requires 60 minutes.

How many minutes does Chef need to clean his entire house?

Input Format
The only line of input contains two space-separated integers X and Y — the number of small and large rooms in Chef's house, respectively.

Output Format
Output a single integer: the number of minutes Chef requires to clean his house.

Constraints
1 ≤ X, Y ≤ 10
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y;
    cin>>x>>y;
    cout<<x*30+y*60<<endl;
    return 0;
}
