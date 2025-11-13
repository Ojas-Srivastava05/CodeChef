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
        string s;
        cin>>s;
        int pulse=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            flag=true;
            if(flag && s[i]=='1')
            {
                pulse++;
            }
        }
        cout<<pulse<<endl;
    }
    return 0;
}
