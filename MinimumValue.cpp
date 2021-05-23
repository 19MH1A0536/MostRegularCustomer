#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int cid=0,min=INT_MAX;;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<"the minimum  value in array is "<<min<<endl;
    return 0;
}