/*
    Coloured Orbs
    Chef has R red orbs, B blue orbs and 0 green orbs.

    He can buy 1 green orb at the cost of 1 red orb + 1 blue orb. (He needs to give both the red and blue orbs in order to buy).

    Initially, Chef has a skill of 0. However each orb that he has at the end, increases his skill by some predetermined quantity.

    1 red orb increases his skill by 1.
    1 blue orb increases his skill by 2.
    1 green orb increases his skill by 5.
    Find the maximum skill that Chef can obtain doing trades wisely.

    Input Format
    The first and only line of input contains 2 integers - R and B, the number of red and blue orbs.
    Output Format
    Output the maximum skill Chef can obtain

    Constraints
    1 ≤ R, B ≤ 10
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int r,b;
    cin>>r>>b;
    int blue=min(r,b);
    if(r<b)
    {
        b=b-r;
        r=0;
    }
    else
    {
        r=r-b;
        b=0;
    }
    int sum=blue*5+r*1+b*2;
    cout<<sum<<endl;
    return 0;
}
