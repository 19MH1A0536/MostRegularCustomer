#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,count=0,max=0,cust;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count=count+1;
            }
        }
        if(count>max)
        {
            max=count;
            cust=arr[i];
        }
    }
    cout<<"Most regular visted customer "<<cust<<endl;
    return 0;
}