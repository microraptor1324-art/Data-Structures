#include <stdio.h>
int main()
{
int numbers[100], num, i, n;
printf("\n--- LINEAR SEARCH ---\n");
printf("Enter the number of elements in array: ");
scanf("%d", &n);

printf("Enter %d numbers: ", n);

for(i = 0; i < n; i++)
scanf("%d", &numbers[i]);
printf("Enter the number to be searched: ");
scanf("%d", &num);
for(i = 0; i < n; i++)
{
if(numbers[i] == num)
{
printf("%d is present at location %d.", num, i + 1);
break;
}
}
if(i == n)
printf("%d is not present in array.", num);
return 0;
}