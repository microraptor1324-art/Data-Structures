#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node *l, *r;
};
struct node* insert(struct node* t, int v) {
if(!t) {
t = malloc(sizeof(struct node));
t->data = v;
t->l = t->r = NULL;
}
else if(v < t->data) t->l = insert(t->l, v);
else t->r = insert(t->r, v);
return t;
}
struct node* del(struct node* t, int v) {
struct node *p;
if(!t) return NULL;
if(v < t->data) t->l = del(t->l, v);
else if(v > t->data) t->r = del(t->r, v);
else {
if(!t->l) return t->r;
if(!t->r) return t->l;
p = t->r;
while(p->l) p = p->l;

t->data = p->data;
t->r = del(t->r, p->data);
}
return t;
}
void display(struct node* t) {
if(t) {
display(t->l);
printf("%d ", t->data);
display(t->r);
}
}
int main() {
struct node *t = NULL;
printf("\n--- BINARY SEARCH TREE ---\n");
t = insert(t, 50);
t = insert(t, 30);
t = insert(t, 70);
t = insert(t, 20);
t = insert(t, 40);
printf("Before deletion: ");
display(t);
t = del(t, 30);
printf("\nAfter deletion: ");

display(t);
return 0;
}