
#include<stdio.h>
#include<stdlib.h>

struct row
{
    int row_index;
    struct row*down;
    struct value*right;

};
struct value
{int data;
int col_index;
struct value *link;
};
struct row*root=NULL;
appendvalue_node(int element,int j);
appendrow_node(int i,int sparse [4][5]);


int main()
 {
    int sparse[4][5]={

        {0,0,3,0,4},
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
          appendrow_node(i,sparse);

        }

        }
    }
    display();
 }

 appendvalue_node(int element,int j)
 { struct value*temp;
 temp=(struct value*)malloc(sizeof(struct value));
 temp->data=element;
 temp->col_index=j+1;
 temp->link=NULL;
 if(root->right==NULL)
 {
     root->right=temp;
 }
 else
 { struct value*p=root->right;
 while(p->link!=NULL)
 {
     p=p->link;
 }
 p->link=temp;
 }

 }


 appendrow_node(int i,int sparse[4][5])
 {
struct row*temp;
 temp=(struct row*)malloc(sizeof(struct row));
 temp->row_index=i+1;
 temp->down=NULL;
 temp->right=NULL;
 if(root==NULL)
 {
     root=temp;
 }
 else
 {
struct row*p=root;
while(p->down!=NULL)
{
    p=p->down;

}
p->down=temp;
 }
int j;
     for(j=0;j<5;j++)
     { if(sparse[i][j]!=0)
        appendvalue_node(sparse[i][j],j);
     }
 }
 display()
 {  struct value*p;
     struct row*r=root;

     while(r!=NULL)
     {
         if(r->right!=NULL)
         {
             printf("row=%d \n",r->row_index);

          p=r->right;

     while(p!=NULL)
     { printf("col=%d \t value=%d \n",p->col_index,p->data);
        p=p->link;
     }

    }
     r=r->down;


     }

 }
