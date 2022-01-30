#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node node;
node *p= NULL;
node *Delete(node *p, int data);
node *insert(node *p,int data);
void search(node *p, int data);
node *FindMin(node* p);
void inorder (node *p);

main()
{
   int choice,digit;
   while(1)
  {
    printf("\n 1. Insertion");
    puts("\n 2. Searching");
    puts("\n 3. Deletion");
    puts("\n 4. Display(Inorder)");
    puts("\n 5. Exit");
    puts("\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
   {
   case 1:
    puts("\nEnter integer : To quit enter 0");
    scanf("%d",&digit);
    while(digit!=0)
    {
        p = insert(p,digit);
        scanf("%d",&digit);
    }
    continue;

   case 2:
    puts("\nEnter the number to be search");
    scanf("%d",&digit);
    search(p,digit);
    continue;

   case 3:
       puts("\nEnter the element for deletion: ");
       scanf("%d",&digit);
       Delete(p,digit);
       continue;

   case 4:
    puts("Inorder traversing tree");
    inorder(p);
    continue;

   case 5:
    exit(0);

   default:
    puts("Invalid choice");
   }
  }
}

node* FindMin(node* p)
{
	while(p->left != NULL)
        p = p->left;
	return p;
}

// Function to search a delete a value from tree.
node* Delete(node *p, int data) {
	if(p == NULL) return p;
	else if(data < p->data) p->left = Delete(p->left,data);
	else if (data > p->data) p->right = Delete(p->right,data);
	// Wohoo... I found you, Get ready to be deleted
	else {
		// Case 1:  No child
		if(p->left == NULL && p->right == NULL) {
			free(p);
			p = NULL;
		}
		//Case 2: One child
		else if(p->left == NULL) {
			struct node *temp = p;
			p = p->right;
			free(temp);
		}
		else if(p->right == NULL) {
			struct node *temp = p;
			p = p->left;
			free(temp);
		}
		// case 3: 2 children
		else {
			struct node *temp = FindMin(p->right);
			p->data = temp->data;
			p->right = Delete(p->right,temp->data);
		}
	}
	return p;
}

node *insert(node *p,int digit)
{
    if(p==NULL)
    {
        p = (node*) malloc(sizeof(node));
        p->left = p->right = NULL;
        p -> data = digit;
    }
    else
    {
        if(digit< p->data)
        {
            p->left = insert(p->left,digit);
        }
        else
        {
           if(digit > p->data)
           {
              p->right = insert(p->right,digit);
           }
           else
           {
               if(digit == p->data)
               {
                   puts("Duplicate node: program exited");
                   exit(0);
               }
           }
        }
    }
}

void search(node *p, int digit)
{
    if(p==NULL)
        puts("the number does not exit\n");
    else
        if(digit == p->data)
           printf("\nNumber = %d\n",digit);
    else
        if(digit < p->data)
           search(p->left, digit);
    else
        search(p->right, digit);
}

void inorder (node *p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        printf("%d\n",p->data);
        inorder(p->right);
    }
}








































