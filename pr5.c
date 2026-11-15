#include <stdio.h>

int main()
{
int s[5], top = -1, ch, i;

printf("--- STACK OPERATIONS ---");

do
{

printf("\n1.Push 2.Pop 3.Display 4.Exit\n");
scanf("%d", &ch);

if(ch == 1)
{
if(top == 4)
printf("Overflow");
else
{
printf("Enter value: ");
scanf("%d", &s[++top]);
}
}
else if(ch == 2)
{
if(top == -1)
printf("Underflow");
else
printf("Deleted: %d", s[top--]);
}
else if(ch == 3)
{
for(i = top; i >= 0; i--)
printf("%d ", s[i]);

}
} while(ch != 4);

return 0;
}