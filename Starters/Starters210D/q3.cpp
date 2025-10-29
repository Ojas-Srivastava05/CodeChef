/*
Chocolate Eating

Chef has A milk chocolates and B dark chocolates with him.

He will repeat the following process A + B times:
- Choose some chocolate that he currently has and eat it.
- After eating it, his satisfaction increases if and only if the number of milk 
  chocolates eaten so far is not equal to the number of dark chocolates eaten 
  so far.

What is his maximum possible satisfaction?

Input Format:
- The first line of input will contain a single integer T, denoting the number 
  of test cases.
- The first and only line contains 2 integers - A and B.

Output Format:
For each test case, output on a new line the maximum possible satisfaction.

Constraints:
- 1 ≤ T ≤ 100
- 1 ≤ A, B ≤ 10⁹
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <limits>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a!=b)
        {
            cout<<a+b<<endl;
            continue;
        }
        cout<<a+b-1<<endl;
    }
    return 0;
}
