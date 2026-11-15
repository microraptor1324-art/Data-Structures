#include <stdio.h>
#define SIZE 5
int main()
{
int q[SIZE], s[SIZE], n, i, top = -1;
printf("\n--- REVERSE QUEUE ---\n");
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter queue elements:\n");
for(i = 0; i < n; i++)
scanf("%d", &q[i]);
for(i = 0; i < n; i++)

s[++top] = q[i];
printf("Reversed Queue:\n");
while(top >= 0)
printf("%d ", s[top--]);
return 0;
}