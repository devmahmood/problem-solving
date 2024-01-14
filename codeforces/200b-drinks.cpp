#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<setprecision(12)<<fixed<<(double)sum/n;
}
