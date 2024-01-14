#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i, j;

    //O(n^2)
    int res = 1;
    for (i = 1; i < s.size(); i++)
    {
        for (j = 0; j < i; j++)
            if (s[i] == s[j])
                break;

        if (i == j)
            res++;
    }

    /*
    //O(nlogn)
    sort(s.begin(), s.end());

    int res = 0;
    for (int i = 0; i < s.size(); i++) {

        while (i < s.size() - 1 && s[i] == s[i + 1])
            i++;

        res++;
    }

    //O(n)
    unordered_set<char> distinct_characters;

    for (char c : s) {
        distinct_characters.insert(c);
    }

    if (distinct_characters.size() % 2 == 0)
    */

    if(res%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}

