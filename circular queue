#include<stdio.h>
#include<stdlib.h>
#define N 10

int queue[N];
int rear=-1,front=-1;

void enqueue(int val)
{ if(front==(rear+1)%N)
 {
printf("queue is full\n");

}
else  if(front==-1&&rear==-1)
{
    front=rear=0;
}
else
{rear=(rear+1)%N;}

queue[rear]=val;
}

void dequeue()
{
 if(front==-1&&rear==-1)
printf("queue is empty");
else if(front==rear)
{
    front=rear=-1;
}
else
{printf("%d is deleted",queue[front]);
front=(front+1)%N;
}
}
void display()
{ int i;
  if(front==-1&&rear==-1)
printf("queue is empty");
 else
 { for(i=front;i<=rear;i++)
  printf("%d \t",queue[i]);
}
}
void peek()
{  if(front==-1)
printf("queue is empty");
else
    printf("%d\t",queue[front]);
}
int main()
 {
    int ch;

    do{ int val;

    printf("1.enqueue\n2.dequeue\n3.display\n4.peek\n5.quit\n");
    printf("enter choice:");
    scanf("%d",&ch);

    switch(ch)
    {
         case 1:  printf("enter element \n");
            scanf("%d",&val);
            enqueue(val);
             break;
    case 2:dequeue();
      break;
    case 3:display();
     break;
    case 4:peek();
     break;
    case 5:exit(0);
     break;
     default:printf("invalid input\n");
     }

    }while(ch!=5);
}
