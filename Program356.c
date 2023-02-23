#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
                temp = temp->rchild;
            }
            else if(No < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
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

bool Search(PNODE Root,int No)
{
    bool flag = false;

    while(Root != NULL)
    {
        if(Root->data == No)
        {
            flag = true;
            break;
        }
        else if(No > Root->data)
        {
            Root = Root->rchild;
        }
        else if(No < Root->data)
        {
            Root = Root->lchild;
        }
    }

    return flag;
}

int CountLeafNode(PNODE Root)
{
    static int Count = 0;

    if(Root != NULL)
    {
        if((Root->lchild == NULL) && (Root->rchild == NULL))
        {
                Count++;
        }
        CountLeafNode(Root->lchild);
        CountLeafNode(Root->rchild);
    }   
    return Count;
}

int CountParentNode(PNODE Root)
{
    static int Count = 0;

    if(Root != NULL)
    {
        if((Root->lchild != NULL) || (Root->rchild != NULL))
        {
                Count++;
        }
        CountParentNode(Root->lchild);
        CountParentNode(Root->rchild);
    }   
    return Count;
}

int CountCompleteParentNode(PNODE Root)
{
    static int Count = 0;

    if(Root != NULL)
    {
        if((Root->lchild != NULL) && (Root->rchild != NULL))
        {
                Count++;
        }
        CountCompleteParentNode(Root->lchild);
        CountCompleteParentNode(Root->rchild);
    }   
    return Count;
}

int CountEvenNodes(PNODE Root)
{
    static int Count = 0;

    if(Root != NULL)
    {
        if(((Root->data) %2) == 0)
        {
            Count++;
        }
        CountEvenNodes(Root->lchild);
        CountEvenNodes(Root->rchild);
    }
    return Count;
    
}

int main()
{
    PNODE Head = NULL;
    bool bRet = false;
    int iRet = 0;

    Insert(&Head,11);
    Insert(&Head,2);
    // Insert(&Head,7);
    Insert(&Head,21);

    printf("\nData using Inorder traversal\n");
    Inorder(Head);

    printf("Data using Preorder traversal\n");
    Preorder(Head);

    printf("Data using Postorder traversal\n");
    Postorder(Head);

    bRet = Search(Head,11);
    if(bRet == true)
    {
        printf("Element is there in BST\n");
    }
    else
    {
        printf("Element is not in the BST\n");
    }

    iRet = CountLeafNode(Head);
    printf("Number of Leaf nodes are : %d\n",iRet);

    iRet = CountParentNode(Head);
    printf("Number of Parent nodes are : %d\n",iRet);

    iRet = CountCompleteParentNode(Head);
    printf("Number of complete Parent nodes are : %d\n",iRet);

    iRet = CountEvenNodes(Head);
    printf("Number of even nodes are : %d\n",iRet);
    return 0;
}