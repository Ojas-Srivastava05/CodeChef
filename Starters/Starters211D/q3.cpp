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
        //the birds before the first occurence of the wolf are safe always
        int safe=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                break;
            }
            safe++;
            
        }
        cout<<safe<<endl;
    }
    return 0;
}
