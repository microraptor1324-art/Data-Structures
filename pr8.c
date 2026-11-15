#include <stdio.h>
#define MAX 20

int main()
{
int a[MAX][MAX], v[MAX] = {0};
int n, i, j, min, x, y, e = 1, cost = 0;

printf("\n--- MINIMUM SPANNING TREE ---\n");

printf("Enter number of nodes: ");
scanf("%d", &n);

printf("Enter cost adjacency matrix:\n");
for(i = 1; i <= n; i++)
for(j = 1; j <= n; j++)
{
scanf("%d", &a[i][j]);
if(a[i][j] == 0)
a[i][j] = 999;
}

v[1] = 1;
printf("Edges and their costs:\n");

while(e < n)
{
min = 999;
for(i = 1; i <= n; i++)
for(j = 1; j <= n; j++)
if(v[i] && !v[j] && a[i][j] < min)
{
min = a[i][j];
x = i;

y = j;
}

if(min == 999)
{
printf("Spanning tree not possible");
return 0;
}

printf("%d -> %d Cost = %d\n", x, y, min);
cost += min;
v[y] = 1;
e++;
}

printf("Minimum Cost = %d\n", cost);
return 0;
}