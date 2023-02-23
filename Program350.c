#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Insert(PPNODE Root, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *Root;

    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Root == NULL)
    {
        *Root = newn;
    } 
    else
    {
        while(1)
        {
            if(No > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
            }
            else if(No < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
            }
            else if(No == temp->data)
            {
                free(newn);
                printf("Duplicate element not allowed.\n");
                break;
            }
        }
    }
}

void Inorder(PNODE Root)
{
    if(Root != NULL)
    {
        Inorder(Root->lchild);
        printf("%d\t",Root->data);
        Inorder(Root->rchild);
    }
}

void Preorder(PNODE Root)
{
    if(Root != NULL)
    {
        printf("%d\t",Root->data);
        Inorder(Root->lchild);
        Inorder(Root->rchild);
    }
}

void Postorder(PNODE Root)
{
    if(Root != NULL)
    {
        Inorder(Root->lchild);
        Inorder(Root->rchild);
        printf("%d\t",Root->data);
    }
}
int main()
{
    PNODE Head = NULL;

    Insert(&Head,11);
    Insert(&Head,7);
    Insert(&Head,21);

    printf("\nData using Inorder traversal\n");
    Inorder(Head);

    printf("Data using Preorder traversal\n");
    Preorder(Head);

    printf("Data using Postorder traversal\n");
    Postorder(Head);

    return 0;
}