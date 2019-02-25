#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    // freopen("input", "r", stdin);

    int N;
    char str[80];
    bool period[80];
    cin >> N;

    char *p;
    int j;
    bool ok, all;

    while (true)
    {
        // clear string
        memset(str, 0, 80);
        cin >> str;
        all = true;
        int len = strlen(str);
        for (int i = 1; i < len; i++)
        {
            if (len % i != 0)
            {
                continue;
            }
            ok = true;
            p = &str[i];
            j = 0;
            while (*p)
            {
                if (*p != str[j])
                {
                    ok = false;
                    break;
                }
                p++;
                j++;
                j = j == i ? 0 : j;
            }
            if (ok)
            {
                all = false;
                cout << i << endl;
                break;
            }
        }
        N--;
        if (all)
        {
            cout << len << endl;
        }
        if (N > 0)
        {
            cout << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}
