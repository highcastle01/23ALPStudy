#include<iostream>
#include <algorithm>
#include <math.h>
#include <limits.h>
using namespace std;

int n, m;
long long int d[105];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    d[1] = d[2] = d[3] = 1;
    d[4] = d[5] = 2;
    for (int i = 6; i < 101; i++)
        d[i] = d[i - 1] + d[i - 5];

    cin >> n;
    while (n--) {
        cin >> m;
        cout << d[m] << '\n';
    }

    return 0;
}
