#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    sort(arr,arr+n);
    int v;
    cin>>v;
    int lb,ub,mid;
    lb =0;
    ub = n-1;
    while(lb<=ub)
    {
        mid = (ub + lb)/2;
        if(arr[mid]==v){cout<<v<<" found at "<<mid+1<<endl;break;}
        else if(arr[mid]>v) ub=mid;
        else lb = mid;
    }
}
