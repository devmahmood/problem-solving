#include <iostream>
#include <cctype>
using namespace std;
 
int main()
{
    string s;
    getline(cin, s);
 
    int uppercount = 0, lowercount = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            uppercount++;
        else
            lowercount++;
    }
 
    if (uppercount > lowercount)
    {
        for (int (unsigned)i = 0; i < s.length(); i++)
            putchar(toupper(s[i]));
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
            putchar(tolower(s[i]));
    }
 
    return 0;
}