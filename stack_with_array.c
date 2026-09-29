
// Stack with arrays
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 7
void push();
void pop();
void display();
void count();
void isempty();
void peek();
int top = -1, stack[size], item, count1 = 0;
;
void main()
{
    int ch;
    while (1)
    {
        printf("\npress 1 to push\n");
        printf("press 2 to pop\n");
        printf("press 3 to display\n");
        printf("press 4 to count\n");
        printf("press 5 to check whether stack is empty or not\n");
        printf("press 6 to read topmost element\n");
        printf("press 7 to exit\n");
        printf("----Enter your choice----");

        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            count();
            break;
        case 5:
            isempty();
            break;
        case 6:
            peek();
            break;
        case 7:
            exit(1);
        }
    }
}
void push()
{

    if (top == size - 1)
        printf("Stack overflow");

    else
    {
        printf("Enter the element");
        scanf("%d", &item);
        top++;
        stack[top] = item;
        count1++;
    }
}
void pop()
{
    if (top == -1)
        printf("\nStack is empty.Deletion is not possible");
    else
    {
        item = stack[top];
        top--;
        printf("Deleted item is %d", item);
        count1--;
    }
}
void display()
{
    int i;
    if (top == -1)

        printf("Stack is empty");
    else
    {
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}
void count()
{
    printf("Total number of stacks are %d", count1);
}
void isempty()
{
    if (top == -1)
        printf("stack is empty");
    else
        printf("stack is not empty with %d elements", count1);
}
void peek()
{
    printf("Top element in a stack is %d", stack[top]);
}