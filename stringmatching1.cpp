#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p,s;
    cin>>s;
    cin>>p;
    int l1 = s.length();
    int l2 = p.length();
    int lim = (l1 - l2)+1;
    int f=0;
    for(int i=0;i<lim;i++)
    {
        int cnt=0;
        for(int j=0,k=i;j<l2;j++,k++)
        {
            if(s[k]!= p[j])break;

            else cnt++;

        }
        if(cnt==l2)
        {
            cout<<"Pattern Found!\n";
            f++;
            break;
        }
    }
    if(f==0)cout<<"Pattern Not Found!\n";



}
