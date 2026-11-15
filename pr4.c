#include <stdio.h>
#include <stdlib.h>
struct node
{
int c,p;
struct node *next;
};
struct node *add(struct node *h,int c,int p)
{

struct node *t=malloc(sizeof(struct node)),*q=h;
t->c=c; t->p=p; t->next=NULL;
if(!h) return t;
while(q->next) q=q->next;
q->next=t; return h;
}
int main() {
struct node *a=NULL,*b=NULL,*r=NULL,*x,*y;
a=add(a,3,2); a=add(a,2,1);
b=add(b,4,2); b=add(b,5,0);
x=a; y=b;
while(x && y) {
if(x->p==y->p) { r=add(r,x->c+y->c,x->p); x=x->next; y=y->next; }
else if(x->p>y->p) { r=add(r,x->c,x->p); x=x->next; }
else { r=add(r,y->c,y->p); y=y->next; }
}
while(x) { r=add(r,x->c,x->p); x=x->next; }
while(y) { r=add(r,y->c,y->p); y=y->next; }
for(x=r;x;x=x->next) printf("%dx^%d ",x->c,x->p);
return 0;
}