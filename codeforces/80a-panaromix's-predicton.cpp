#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int flag = 0;

    for (int i = n + 1; i <= m; i++)
    {
        int counter = 0;
        for (int j = 2; j <= i / 2 + 1; j++)
        {
            if (i % j == 0)
            {
                counter++;
            }
        }
        if (counter == 0)
        {
            if (i == m)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
            else
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
    }

    if (!flag)
    {
        cout << "NO" << endl;
    }

    return 0;
}
