#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    int row_index;
    int col_index;
    struct node *link;
};
 struct node *root=NULL;
 void append(int element,int row,int col);
 void printlist();
 int main()
 {
    int sparse[4][5]={

        {0,0,3,0,4

        },
       {
        0,0,5,7,0
       },
       {
         0,0,0,0,0
       },
       {
         0,2,6,0,0
       }
    };

    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {

         if(sparse[i][j]!=0)
        {
            append(sparse[i][j],i,j);

        }

        }
    }
    printlist();
 }
 void append(int element,int row,int col)
 {
  struct node*temp;
 temp=(struct node*)malloc(sizeof(struct node));
  temp->data=element;
  temp->row_index=row;
  temp->col_index=col;
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
 }
 void printlist()
 {
struct node* temp=root;
printf("order is value\t rows \tcolumns \n");
 while(temp->link!=NULL)
{
    printf(" [%d-->%d-->%d]-->",temp->data,temp->row_index,temp->col_index);
    temp=temp->link;
}
      printf("[%d-->%d-->%d]",temp->data,temp->row_index,temp->col_index);
 }




