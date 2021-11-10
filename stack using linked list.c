#include<stdio.h>
#include<stdlib.h>

struct stack
{
  int data;
    struct stack*link;
};
struct stack*top=NULL;

void push(int val)
{
   struct stack*temp;
   temp=(struct stack*)malloc(sizeof(struct stack));
    temp->data=val;
    temp->link=top;
    top=temp;

}
void pop()
{
  struct stack*temp=top;
  if(top==NULL)
    printf("empty\n");
    return;

  top=top->link;
  free(temp);

}
void display()
{
 struct stack*temp=top;
 while(temp!=NULL)
{
    printf("%d \t",temp->data);
    temp=temp->link;
}
}
void peek()
{


}

int main()
{
    int ch,cont;

    do
    { int val;

        printf("1.push\n2.pop\n3.display\n4.peek\n5.quit\n");
        printf("enter choice");
        scanf("%d",&ch);

        switch(ch)
        {

        case 1:printf("\nenter data:");
        scanf("%d",&val);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("invalid input");
        }
        printf("enter 1 to continue other wise any");
        scanf("%d",&cont);
    }
    while(cont==1);
}

