#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
 struct node *root=NULL;

 struct node * append(int val)
{
  struct node*temp;
 temp=(struct node*)malloc(sizeof(struct node));
 (temp->data)=val;
   temp->link=NULL;
   if (root==NULL)
   {
       root=temp;
   }


    else
    {
        struct node *p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
    return root;
}

void display(struct node *root)
{
struct node* temp=root;
 while(temp!=NULL)
{
    printf("%d \t",temp->data);
    temp=temp->link;
}
}

struct node* reverse(struct node*root)
{ struct node*p=root;
if(p->link==NULL)
{ root=p;
 return root;
}
 struct node*temp =reverse(p->link);
 p->link->link=p;
 p->link=NULL;
 return temp;
}

int main()
{ root=append(10);
 root=append(20);
 root=append(30);
 root=append(40);
 root=append(50);
 root=append(60);
 display(root);
 printf("reversing:\n");
 root=reverse(root);
 display(root);

}

