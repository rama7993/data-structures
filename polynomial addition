
#include<stdio.h>
 #include<stdlib.h>

 void pol1();
 void pol2();
 void dis1();
 void dis2();
 void poladd();

 struct node
 {
     int coeff;
     int exp;
     struct node*link;
 };
struct node *head1=NULL,*head2=NULL;



int main()
{ int m,n;
printf("enter m,n:");
scanf("%d %d",&m,&n);

   for(int i=0;i<m;i++)
   {
       pol1();
   }

   for(int j=0;j<n;j++)
   {
       pol2();
   }

   dis1();
   printf("\n");
   dis2();
    printf("\n");
    poladd();
}
void pol1()
{ struct node*temp;
struct node *p1=head1;

temp= (struct node*)malloc(sizeof( struct node));

printf("enter constant: \t");
printf(" enter exponent: \n");
scanf("%d",&(temp->coeff));
scanf("%d" ,&(temp->exp));

temp->link=NULL;
if(head1==NULL)
{
    head1=temp;
}
else
{ while(p1->link!=NULL)
{
    p1=p1->link;
}

p1->link=temp;

}
}
void pol2()
{ struct node*temp;
struct node *p2=head2;

temp= (struct node*)malloc(sizeof( struct node));

printf("enter constant: \v");
printf(" enter exponent: \n");
scanf("%d",&(temp->coeff));
scanf("%d" ,&(temp->exp));

temp->link=NULL;
if(head2==NULL)
{
    head2=temp;
}
else
{ while(p2->link!=NULL)
{
    p2=p2->link;
}

p2->link=temp;

}

}
void dis1()
{
     struct node*p1=head1;
     if(head1==NULL)
     {
         printf("empty \n");
     }
     else

    {while(p1->link!=NULL)
    { printf("%d x^%d +",p1->coeff,p1->exp);
    p1=p1->link;

    }
    printf("%d x^%d",p1->coeff,p1->exp);
    }

}
void dis2()
{ struct node*p2=head2;
    while(p2->link!=NULL)
    { printf("%d x^%d +",p2->coeff,p2->exp);
    p2=p2->link;

    }
    printf("%d x^%d",p2->coeff,p2->exp);

}
void poladd()
{ struct node*p1=head1,*p2=head2;
if((head1)&&(head2)==NULL)
{
    printf("empty \n");
}
else
{


while((p1)&&(p2)!=NULL)
{
     if(p1->exp==p2->exp)
    {
      printf("%d x^%d",p1->coeff+p2->coeff,p1->exp);
      p1=p1->link;
      p2=p2->link;
    }
    else if(p1->exp>p2->exp)
    {

 printf("%d x^%d",p1->coeff,p1->exp);
   p1=p1->link;
    }
     else
    {
      printf("%d x^%d",p2->coeff,p2->exp);

      p2=p2->link;
    }
printf("+");

}


while((p1)||(p2)!=NULL)
{

    while(p1->link!=NULL)
    {

 printf("%d x^%d",p1->coeff,p1->exp);
   p1=p1->link;



    }
     printf("%d x^%d",p1->coeff,p1->exp);

      while(p2->link!=NULL)
    {
      printf("%d x^%d+ ",p2->coeff,p2->exp);
      p2=p2->link;



    }
     printf("%d x^%d+ ",p2->coeff,p2->exp);

}
}
}
