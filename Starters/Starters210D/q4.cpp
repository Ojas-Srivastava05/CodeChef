/*
First Element Counting

You are given an array A of N distinct integers: [A₁, A₂, …, Aₙ].

We define f(X) as the index i which has the minimum value of |Aᵢ - X| among 
i = 1, 2, …, N. In case there are multiple indices i with the minimum value, 
choose the one with the smallest value of Aᵢ.

Your task is to count the number of integers X such that f(X) = i for each 
i = 1, 2, …, N.

In case the answer is infinite for some index i, output -1 instead.

Input Format:
- The first line of input will contain a single integer T, denoting the number 
  of test cases.
- Each test case consists of multiple lines of input.
- The first line of each test case contains a single integer N, the size of 
  the array.
- The second line contains N distinct integers: A₁, A₂, …, Aₙ.

Output Format:
For each test case, output on a new line N integers, the number of integers X 
such that f(X) = i for each i = 1, 2, …, N, or -1 if the answer is infinite.

Constraints:
- 1 ≤ T ≤ 10⁴
- 2 ≤ N ≤ 2·10⁵
- 1 ≤ Aᵢ ≤ 10⁹
- Aᵢ ≠ Aⱼ for all 1 ≤ i < j ≤ N
- The sum of N over all test cases does not exceed 2·10⁵
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
        int n;
        cin>>n;
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        if(n<=2)
        {
            for(int i=0;i<arr.size()-1;i++)
            {
                cout<<-1<<" ";
            }
            cout<<endl;
            continue;
        }
        else
        {
            unordered_map<int,int>mp;
            for(int i=1;i<=n;i++)
            {
                mp[arr[i]]=0;
            }
            vector<int> temp(arr.begin() + 1, arr.end());
            sort(temp.begin(),temp.end());
            mp[temp[0]]=-1;
            mp[temp[n-1]]=-1;
            for(int i=1;i<n-1;i++)
            {
                int left=abs(temp[i]+temp[i-1])/2;
                int right=abs(temp[i]+temp[i+1])/2;
                int diff=abs(right-left);
                mp[temp[i]]=diff;
            }
            for(int i=1;i<=n;i++)
            {
                cout<<mp[arr[i]]<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}
