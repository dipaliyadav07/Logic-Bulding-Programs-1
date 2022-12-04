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

void InsertFirst(PPNODE First, int No)
{


}

void Display(PNODE First)
{

}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    return 0;
}

/*
    void InsertFirst(PPNODE First, int No)
    void InsertLast(PPNODE First, int No)
    void InsertAtPos(PPNODE First, int No, int Pos)

    void DeleteFirst(PPNODE First)
    void DeleteLast(PPNODE First)
    void DeleteAtPos(PPNODE First, int No)

    void Display(PNODE First)
    int Count(PNODE First)
*/
/////////////////////////////////////////////////////////////////////
/*
    void InsertFirst(&Head,11)
    void InsertLast(&Head,11)
    void InsertAtPos(&Head,11,5)

    void DeleteFirst(&Head)
    void DeleteLast(&Head)
    void DeleteAtPos(&Head,5)

    Display(Head)
    Count(Head)
*/