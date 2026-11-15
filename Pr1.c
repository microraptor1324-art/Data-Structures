#include <stdio.h>
int main()
{
int n, i;
float a[100], sum = 0, mean;
printf("\n--- MEAN OF N NUMBERS USING ARRAYS ---\n");
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter %d numbers:\n", n);

for(i = 0; i < n; i++)
{
scanf("%f", &a[i]);
sum = sum + a[i];
}
mean = sum / n;
printf("\nMean = %.2f\n", mean);
return 0;
}