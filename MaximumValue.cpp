#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int cid=0,max=INT_MIN;;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<"the maximum value in array "<<max<<endl;
    return 0;
}