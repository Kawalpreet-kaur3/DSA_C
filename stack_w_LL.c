#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
int info;
struct node *ptr;
}*top=NULL,*top1,*temp;
int count=0;
void stack_count()
{
printf("Number of elements in a stack is %d",count);
}
void push(int data)
{
if(top==NULL)
{
top=(struct node *)malloc(sizeof(struct node));
top->ptr=NULL;
top->info=data;
}
else
{
temp=(struct node *)malloc(sizeof(struct node));

temp->ptr=top;
temp->info=data;
top=temp;
}
count++;
}
void display()
{
top1=top;
if(top1==NULL)
{
printf("Stack is empty");
return;
}
else
{
while(top1!=NULL)
{
printf("%d\n",top1->info);
top1=top1->ptr;
}
}
}

int top_element()

{
return(top->info);
}
void empty()
{
if(top==NULL)
printf("Stack is empty");
else
printf("Stack is not empty with %d elements",count);
}
void pop()
{
top1=top;
if(top1==NULL)
{
printf("The data can not be popped");
return;
}
else
{
top1=top->ptr;
printf("Popped value is %d",top->info);
free(top);
top=top1;
count--;

}
}
void main()
{
int ch,e,no;
while(1)
{
printf("\npress 1 to push the data into the stack\n");
printf("press 2 to pop the data from the stack\n");
printf("press 3 to display the data in the stack\n");
printf("press 4 to count the total number of stacks\n");
printf("press 5 to check whether the stack is empty or not\n");
printf("press 6 to display the topmost element in stack\n");
printf("Press 7 to exit\n\n");
printf("----Enter your choice----");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the data");
scanf("%d",&no);
push(no);
break;
case 2:pop();
break;
case 3:display();

break;
case 4:stack_count();
break;
case 5:empty();
break;
case 6:if(top==NULL)
printf("No element is there in the stack");
else
{

e=top_element();
printf("Topmost element in a stack is %d",e);
break;

}
case 7:exit(1);
}
}
}