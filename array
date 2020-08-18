#include<stdio.h>

void insert(int a[]);
void dlt(int a[]);
void display(int a[]);
void search(int a[]);

int main()
{
    int ch,cont;

    do
    { int a[10];
        printf("1.insert\n 2.delete\n3.search\n4.display\n");
        printf(" enter choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert(a);
            break;
        case 2:
            dlt(a);
            break;
        case 3:
            search(a);
            break;
        case 4:
            display(a);
            break;
        default :
            (" enter valid input \n");
        }
        printf("\nenter 1 to continue else any \n");
        scanf("%d",&cont);
    }
    while(cont==1);



}

void insert(int a[])
{ int data,loc;
    printf("enter location \n");
    scanf("%d",&loc);
    printf("enter data");
    scanf("%d",&data);
for(int i=10;loc<=i;i--)
{
  a[i+1]=a[i];
}

a[loc]=data;

}

void dlt(int a[])
{
    int loc;
    printf("enter location \n");
    scanf("%d",&loc);
    int i;

    for(i=loc; i<10; i++)
    {
        a[i] =a[i+1];

    }


}

void search(int a[])
{
    int i,data;
    printf("enter data to search \n");
    scanf("%d",&data);

    for(i=1;i<=10;i++)
    {
        if(a[i]==data)
            printf (" %d is found at location %d \n",a[i],i);
    }
}


void display(int a[])
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d \t",a[i]);

}
