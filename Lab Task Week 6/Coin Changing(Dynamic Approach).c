#include <stdio.h>
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
const int INF = 100000;
int coin_change(int d[], int n, int k)
{
int M[n+1];
M[0] = 0;
int i, j;
for(j=1; j<=n; j++)
{
int minimum = INF;
for(i=1; i<=k; i++)
{
if(j >= d[i])
{
minimum = MIN(minimum, 1+M[j-d[i]]);
}
}
M[j] = minimum;
}
return M[n];
}
int main()
{
int d[] = {0, 1, 2, 3};
printf("Coin Need: %d\n", coin_change(d, 5, 3));
return 0;
}
