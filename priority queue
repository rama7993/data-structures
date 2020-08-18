#include<stdio.h>
#include<stdlib.h>

struct node
{  int data;
  int priority;
    struct node *next;
};
struct node*head=NULL;

void append()
{ int val,pri;
  struct node*p=head,*temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("enter data and priority:\n");
  scanf("%d %d",&val,&pri);
   temp->data=val;
   temp->priority=pri;
  temp->next=NULL;
  if( head==NULL || pri <(head->priority) )
  {  temp->next=head;
      head=temp;
  }
    else
    {
       while(p->next!=NULL&&p->next->priority<=pri)
       {
          p=p->next;
       }
       temp->next=p->next;
       p->next=temp;
    }
}
void deletenodes()
{ struct node*p=head;
 if (head==NULL)
 {
   printf("UNDER FLOW\n");

 }
 else
 {
     printf("%d is deleted\n",p->data);
     head=head->next;
     free(p);
 }


}

void display()
{ if(head==NULL)
 printf("UNDERFLOW");
else{
 struct node*temp=head;
  printf("\npriority-->data:\n\n");
 while(temp!=NULL)
{  printf("%d-->%d  \t",temp->priority,temp->data);
    temp=temp->next;
}
printf("\n");
}
}

void main()
 {
     int ch,len;
     while(1)
     {
         printf("\n1.append\n 2.delete nodes \n 3.display \n4.quit \n");
         printf("enter choice");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1: append();
             break;
             case 2:deletenodes();
             break;
             case 3:display();
             break;
             case 4: exit(0);
             break;
              default :printf("\ninvalid input\n");

         }
     }
 }



