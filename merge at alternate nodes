#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
 struct node *head1=NULL;
 struct node *head2=NULL;

 void append(struct node **root)
{
  struct node*temp;
 temp=(struct node*)malloc(sizeof(struct node));
   printf("enter data ");
   scanf("%d",&(temp->data));
   temp->link=NULL;
   if (*root==NULL)
   {
       *root=temp;
   }


    else
    {
        struct node *p=*root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}

void display(struct node *head)
{   struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d  \t", temp->data);
        temp = temp->link;
    }
    printf("\n");

}

void  merge( struct node *head1, struct node *head2)
{ struct node*p1=head1;
struct node*p2=head2;
struct node*temp;

while(p1!=NULL&&p2!=NULL)
{ temp=p1->link;
p1->link=p2;
p2=p2->link;
 p1->link->link=temp;
p1=temp;
}

}
void rec(struct node*head)
{ struct node*temp=head;
 if(temp==NULL)
    return;
 printf("%d  \t",temp->data);
 rec(head->link);

}

int main()
{

append(&head1);
append(&head1);
append(&head1);
append(&head1);
display(head1);
rec(head1);
append(&head2);
append(&head2);
append(&head2);
append(&head2);
display(head2);

merge(head1,head2);
display(head1);
}
