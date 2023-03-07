#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        char ch='a';
        for(int i=1,count=1;i<=n;i++,count++)
        {
            s.push_back(ch);
            ch++;
            if(count==b)
            {
                ch='a';
                count=0;
            }
            if(ch>'z') ch='a';
        }
        cout<<s<<endl;
    }
}
