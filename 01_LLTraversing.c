#include <stdio.h>
#include <stdlib.h>
// because using malloc

struct node
{
    int data;
    struct node *next;
    // pointer
};
// define struct

void LinkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // alloacate memory for nodes in the linked list in heep
    // ddynamically allocates a block of memory from the heap to store a single node of a linked list.
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
// sizeof(struct node): Calculates the exact size in bytes required to store a struct node variable. 
// (struct node *): This is a typecast. It explicitly converts the generic void * pointer
//  returned by malloc() into a pointer of type struct node * so that it matches the type of the head variable
// head = ...: Assigns the memory address of the newly allocated block to the pointer variable named head.
//  head now acts as the entry point or first node of your linked list


    // link first and second nodes
    head->data = 7;
    head->next = second;

    // link second and third nodes
    second->data = 11;
    second->next = third;

    // terminate the list at the third node
    third->data = 66;
    third->next = fourth;

    // terminate the list at the third node
    fourth->data = 24;
    fourth->next = NULL;

    LinkedlistTraversal(head);
    // call the function
    return 0;
}

//  The malloc function stands for memory allocation. If the allocation is successful, it returns a generic void* pointer
//  pointing to the first byte of this newly reserved space. If the system is out of memory, it returns NULL.