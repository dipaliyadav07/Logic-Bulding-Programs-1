#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));       //Step 1 - Allocate Memory
    
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)      // If linked list is empty
    {
        *First = newn;
    }
    else        // If linked list contains atleast one node
    {
        newn->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));       //Step 1 - Allocate Memory
    
    newn->data = no;
    newn->next = NULL;

    if(*Last == NULL)      // If linked list is empty
    {
        *Last = newn;
    }
    else        // If linked list contains atleast one node
    {

    }
}

void Display(PNODE First)
{
    printf("Element from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);     // InsertFirst(60,51)
    InsertFirst(&Head, 21);     // InsertFirst(60,21)
    InsertFirst(&Head, 11);     // InsertFirst(60,11)

    Display(Head);

    return 0;
}

/*
    // Call by Address

    InsertFirst()
    InsertLast()
    InsertAtPosition

    DeleteFirst()
    DeleteLast()
    DeleteAtPosition()

    // Call by Value 

    Display()
    Count()
*/