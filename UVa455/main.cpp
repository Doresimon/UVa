#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    freopen("input", "r", stdin);

    int N;
    char[80] str;
    cin >> N;
    cout << N << endl;

    while (N > 0)
    { /* input */

        cin >> str;
        cout << N << str;

        N--;
    }

    return 0;
}
