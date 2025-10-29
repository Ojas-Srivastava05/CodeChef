/*
Notebook Counting

Chef has A notebooks with him, each having a total of B pages.

Each page has 50 lines drawn to be written on, and you can write on both sides 
of the pages. Chef has to follow the drawn lines when writing. Thus, he can 
only write 50 lines on the front side of the page, and 50 lines on the back 
side.

What is the effective total number of lines that Chef can write across all his 
notebooks?

Input Format:
The first and only line of input contains 2 integers - A and B.

Output Format:
For each test case, output on a new line the total number of lines Chef can 
write.

Constraints:
- 1 ≤ A ≤ 10
- 1 ≤ B ≤ 100
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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    cout<<a*b*100;
    return 0;
}