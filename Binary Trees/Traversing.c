#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node *left;
    struct node *right;
};

typedef struct node node;
node *root=NULL;

node *insert(node *p, long digit);
void preorder(node *p);
void inorder(node *p);
void postorder(node *p);
int count=1;

main()
{
   int choice;
   long digit;
   while(1)
   {
       puts("\n 1. Insertion");
       puts("\n 2. Display(preorder)");
       puts("\n 3. Display(inorder)");
       puts("\n 4. Display(postorder");
       puts("\n 5. Exit");
       puts("\nEnter your choice: ");
       scanf("%d",&choice);

       switch(choice)
       {
       case 1:
        puts("\nEnter Integer: To quit enter 0");
        scanf("%d",&digit);
        while(digit!=0)
        {
            root = insert(root,digit);
            scanf("%d",&digit);
        }
        continue;

       case 2:
        puts("\n PreOrder Traversing Tree: ");
        preorder(root);
        continue;

       case 3:
        puts("\n Inorder traversing Tree: ");
        inorder(root);
        continue;

       case 4:
        puts("\n Postorder traversing Tree");
        postorder(root);
        continue;

       case 5:
        exit(0);

       default:
        puts("Invalid choice");

       }
    }
}

node *insert(node *p, long digit)
{
    if(p==NULL)
    {
        p = (node*)malloc(sizeof(node));
        p->left = p->right = NULL;
        p->num =digit;
        count++;
    }
    else
    {
        if(count%2 == 0)
        {
            p->left = insert(p->left, digit);
        }
        else
        {
            p->right = insert(p->right, digit);
        }
    }
    return(p);
}

void preorder(node *p)
{
    if(p!=NULL)
    {
        printf("%d\n",p->num);
        preorder(p->left);
        preorder(p->right);
    }
}

void inorder(node *p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        printf("%d\n",p->num);
        inorder(p->right);
    }
}

void postorder(node *p)
{
    if(p!=NULL)
    {
        postorder(p->left);
        postorder(p->right);
        printf("%d\n",p->num);
    }
}







































