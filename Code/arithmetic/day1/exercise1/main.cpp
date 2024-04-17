#include <iostream>

using namespace std;
const int N = 100010;
int a[N], b[N];

int main(int argc, char **argv)
{
    int n, m;
    memset(a, 0, N);
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i] - a[i - 1];
    }
    while (m--)
    {
        int l, r, c;
        scanf("%d%d%d", &l, &r, &c);
        b[l] += c;
        b[r + 1] -= c;
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] = b[i] + a[i - 1];
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
