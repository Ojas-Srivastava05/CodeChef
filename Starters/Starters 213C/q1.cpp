/*
EXML Race

EXML is back with a bang!

N AI-driven cars (labeled from 1 to N) are racing on a circular track. The race was going well until some cars crashed into each other; as a result of which all the cars got damaged and stopped working in the middle of the race.

The Exun committee has to declare a winner regardless of the crashes. They were able to obtain two measurements for each car: the total distance (in meters) it traveled before getting damaged, and the time (in seconds) it took to cover this distance. For the i-th car, these are represented by the values di and ti, respectively. It is guaranteed that di is a multiple of ti.

The committee has decided to simply declare the fastest car to be the winner. Your task is to determine the fastest car and output its label.

You may assume that each car travels at a constant speed. If there are multiple fastest cars, report the one among them with minimum label.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases. Each test case consists of multiple lines of input. The first line of each test case contains a single integer N — the number of cars. The next N lines describe the measurements of the cars. The i-th line contains two space-separated integers di and ti, denoting the distance traveled and time taken by the i-th car.

Output Format
For each test case, output on a new line the answer: the label of the fastest car. If there are multiple fastest cars, report the one among them with minimum label.

Constraints
1 ≤ T ≤ 100
1 ≤ N ≤ 100
1 ≤ ti ≤ di ≤ 100
For each i, di is a multiple of ti.
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
        vector<int>d(n);
        vector<int>t(n);
        for(int i=0;i<n;i++)
        {
            cin>>d[i]>>t[i];    
        }
        vector<int>speed(n);
        for(int i=0;i<n;i++)
        {
            speed[i]=d[i]/t[i];
        }
        int maxspeed=max_element(speed.begin(),speed.end())-speed.begin();
        cout<<maxspeed+1<<endl;
    }
    return 0;
}
