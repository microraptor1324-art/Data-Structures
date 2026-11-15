#include <stdio.h>
int main()
{
int a[20][20], s[100][3];
int r, c, i, j, k = 0, count = 0;
printf("\n--- SPARSE MATRIX USING ARRAY ---\n");
printf("Enter rows and columns: ");

scanf("%d%d", &r, &c);
if(r <= 0 || r > 20 || c <= 0 || c > 20)
{
printf("Invalid size");
return 0;
}
printf("Enter matrix elements:\n");
for(i = 0; i < r; i++)
for(j = 0; j < c; j++)
{
scanf("%d", &a[i][j]);
if(a[i][j] != 0)
{
s[k][0] = i;
s[k][1] = j;
s[k][2] = a[i][j];
k++;
count++;
}
}
if(count <= (r * c) / 2)
{
printf("\nSparse Matrix Representation:\n");
printf("Row\tCol\tValue\n");

for(i = 0; i < k; i++)
printf("%d\t%d\t%d\n", s[i][0], s[i][1], s[i][2]);
}
else
printf("\nNot a Sparse Matrix");
return 0;
}