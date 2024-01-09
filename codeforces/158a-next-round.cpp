#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, counter = 0;
    cin>>n>>k;
    int arr[1000];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++)
    {
        if(arr[i] >= arr[k-1] && arr[i] > 0)
        counter++;
    }
    cout<<counter<<endl;
}
