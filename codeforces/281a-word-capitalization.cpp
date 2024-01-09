#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    /*
        //approach 1:
        if(s[0] >= 'a' && s[0] <= 'z')
            s[0] = s[0] - 'a' + 'A';

        //approach 2:
        if(int(s[0])>=97)
            s[0] = s[0] - 32;
    */

    //approach 3:
    s[0] = toupper(s[0]);

    cout<<s;
}
