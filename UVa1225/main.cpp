#include <iostream>

using namespace std;

void rec(int num, int base, bool keep_zero, int *out)
{
    int ret = num;
    if (base == 0)
    {
        return;
    }

    out[num / base] += num % base + 1;
    rec(num % base, base / 10, true, out);
    num = num / base * base - 1;

    while (num >= base)
    {
        /* code */
        out[num / base] += num % base + 1;
        rec(num % base, base / 10, true, out);
        num -= base;
    }

    if (keep_zero)
    {
        out[0] += num % base + 1;
    }
    rec(base - 1, base / 10, keep_zero, out);

    return;
}

int main()
{
    int N;
    int T;
    int base = 10;
    int digit = 1;
    int out[10];
    cin >> N;

    for (size_t x = 0; x < N; x++)
    {
        /* input */
        cin >> T;
        /* get T.length */
        base = 1;
        digit = 0;
        while (true)
        {
            if (T / base < 10)
            {
                break;
            }
            base *= 10;
        }

        /* refresh output */
        for (size_t i = 0; i < 10; i++)
        {
            out[i] = 0;
        }

        /* main code */
        rec(T, base, false, out);
        /* refresh output */
        for (size_t i = 0; i < 10; i++)
        {
            cout << out[i];
            if (i != 9)
            {
                cout << " ";
            }
            else
            {
                cout << endl;
            }
        }
    }

    return 0;
}
