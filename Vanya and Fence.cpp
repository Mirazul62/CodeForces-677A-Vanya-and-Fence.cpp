#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,h,count=0,a[10000];
    cin>>n>>h;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
        for(i=0;i<n;i++)
    {
        if(a[i]<=h)
            count++;
        else
            count+=2;
    }
    cout<<count;

}
