#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,temp,counter = 0;
    cin>>n;

    while(n!=0)
    {
        temp = n % 10;
        if(temp == 4 || temp == 7)
            counter++;
        n /= 10;
    }

    /*
    // Convert the number to a string
    string s = to_string(n);

    // Count the lucky digits in the string
    counter = count(s.begin(), s.end(), '4') + count(s.begin(), s.end(), '7');
    */

    if(counter == 4 || counter == 7)
        cout<<"YES";
    else
        cout<<"NO";
}

