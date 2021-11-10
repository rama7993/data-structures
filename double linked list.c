#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *front;
    struct node* back;
};
 struct node *root=NULL;

void append()
{
  struct node*temp;
  temp=(struct node*)malloc(sizeof(struct node));
   printf("enter data ");
   scanf("%d",&(temp->data));
   temp->front=NULL;
   temp->back=NULL;

   if (root==NULL)
   {

       root=temp;
   }


    else
    {
        struct node *p=root;
        while(p->front!=NULL)
        {
            p=p->front;
        }
        p->front=temp;
        temp->back=p;
    }

}
int length()
{
  int count=0;
struct node*temp;
   temp=root;

  while(temp!=NULL)
  {count++;
   temp=temp->front;
  }

return count;

}

void deletenodes()
{

int len,loc;
struct node*temp,*p,*q;
len=length();
printf("enter location");
scanf("%d",&loc);
if(loc>len)
{
    printf("invalid location\n");
    printf("currently  having %d nodes \n",len);

}
else if(loc==1)
{ temp=root;
root=root->front;
(root->front)->back=NULL;
free(temp);

}
else
{ p=root;
int i;
for(i=1;i<loc-1;i++)
{
    p=p->front;
}
  q=p->front;

 p->front=q->front;
  (q->front)->back=p;

 free(q);
}

}

void insert()
{ int len=length(),i,loc;
printf("enter location");
scanf("%d",&loc);
if(loc>len)
{
    printf("invalid location \n");
    printf("currently  having %d nodes ",len);
}
else
{struct node*temp,*p;
   p=root;
 temp=(struct node*)malloc(sizeof(struct node));
   printf("enter data ");
   scanf("%d",&(temp->data));
   temp->front=NULL;
   temp->back=NULL;
   if(loc!=1)
    {
        i=1;
        while(i<loc-1)
        {p=p->front;
        i++;
        }
        temp->front=p->front;
        p->front->back=temp;
        p->front=temp;
      temp->back=p;
   }
   else
   {
     temp->front=root;
     root->back=temp;
     root=temp;
   }
}


}
void display()
{ struct node*temp=root;
while(temp!=NULL)
{ printf("%d \t ",temp->data);
temp=temp->front;

}

}
void search()
{


}
void divide ()
{ struct node*temp=root;
 int i;
 printf("enter no. to divide\n");
 scanf("%d",&i);
 while(temp!=NULL)
{
  temp->data=(int)(temp->data)/i;
  temp=temp->front;
}

}

void duplicate()
{ struct node*p1=root,*p2,*dup,*temp;

    while((p1!=NULL)&&(p1->front)!=NULL)
    { p2=p1;
      while(p2->front!=NULL)
      {
           if( (p1->data)==(p2->front->data) )
        {
            if((p2->front->front)!=NULL)
            {

           temp=dup=p2->front;
            p2->front=p2->front->front;
           temp->front->back=p2;
             free(dup);
           }
           else
           {
            p2->front=NULL;
            }
        }

          else p2=p2->front;

      }
        p1=p1->front;
    }
}




 void main()
 {
     int ch,len;
     while(1)
     {
         printf("\n1.append\n 2.insert \n 3.delete nodes \n 4.display \n5.length \n6.search\n7.divide by integer \n8.remove duplicates\n9.quit \n");
         printf("enter choice");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1: append();
             break;
             case 2:insert();
             break;
             case 3:deletenodes();
             break;
             case 4:display();
             break;
             case 5:len=length();
             printf("\n%d\n",len);
             break;
            case 6:search();
            break;
            case 7: divide();
            break;
            case 8:duplicate();
            break;
             case 9: exit(0);
             break;
              default :printf("invalid input");

         }
     }
 }
