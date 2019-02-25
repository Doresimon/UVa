#include <iostream>
#include <cstdio>

using namespace std;

void rec()
{
    return;
}

int read_multi_line_with_N()
{
    int N;
    cin >> N;

    for (size_t x = 0; x < N; x++)
    {
        /* input */
        cin >> a >> b;
        /* code */
    }

    return 0;
}

int read_multi_line_with_EOF()
{
    int a, b;

    while (
        cin >> a >> b)
    {
        /* code */
    }

    return 0;
}

int read_from_file()
{
    freopen("input.txt", "r", stdin);

    int N;
    cin >> N;

    for (size_t x = 0; x < N; x++)
    {
        /* input */
        cin >> a >> b;
        /* code */
    }

    return 0;
}
