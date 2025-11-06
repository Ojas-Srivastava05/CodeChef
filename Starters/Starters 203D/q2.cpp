/*
Passing Grade
Chef is in a class in his university with a total of N students (including him). Chef's professor likes Chef but hates the entire class.

Chef's professor has just finished grading their exam papers, and it is known that the i-th student has scored A_i marks. Chef is student number 1, and the other students are numbered from 2 to N.

Chef's professor cannot change the marks the students received, but he can decide the cutoff marks. He wants to ensure Chef passes, but at the same time, fail as many other students as possible. Formally, he will choose some cutoff marks X (0 ≤ X ≤ 100) and then fail all students with marks strictly less than X, and pass those with ≥ X.

Find the number of students that passes that class, when Chef's professor chooses in the cutoff in the optimal way (minimizing the number of students that pass, but ensuring Chef passes).

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line contains a single integer N.
The second line contains N integers - A_1, A_2, …, A_N, the marks each student got.
Output Format
For each test case, output on a new line the minimum number of students that pass the class.

Constraints
1 ≤ T ≤ 100
2 ≤ N ≤ 100
0 ≤ A_i ≤ 100
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
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            cin>>ans[i];
        }
        int cutoff=ans[0];
        int pass=0;
        for(int i=0;i<n;i++)
        {
            if(ans[i]>=cutoff)
            {
                pass++;
            }
        }
        cout<<pass<<endl;
    }
    return 0;
}


