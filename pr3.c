#include <stdio.h>
#include <stdlib.h>
struct node {
char name[30];
struct node *next;
};
int main() {
struct node *head = NULL, *p, *q;

int n, i;
printf("\n--- EMPLOYEE LINKED LIST ---\n");
printf("Enter number of employees: ");
scanf("%d", &n);
for(i = 0; i < n; i++) {
p = malloc(sizeof(struct node));
printf("Enter name: ");
scanf("%s", p->name);
p->next = NULL;
if(head == NULL) head = p;
else q->next = p;
q = p;
}
printf("\nEmployee Names:\n");
for(p = head; p != NULL; p = p->next)
printf("%s\n", p->name);
return 0;
}