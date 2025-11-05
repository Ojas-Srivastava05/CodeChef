#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int w,p,k;
        cin>>w>>p>>k;
        int sum=0;
        if(k<=w)
        sum=2*k;
        else
        sum=2*w+(k-w);
        cout<<sum<<endl;
        
    }
    return 0;
}
