//Queue using arrays
//By varshith suniganti

#include<stdio.h>
#include<stdlib.h>
#define MAX 15
void enqueue();
void dequeue();
void display();
 
 int queue[MAX];
 int rear=-1,front=0;
  
void main()
{
	while(1)
	{
	int choice;
	printf("enter the your choice:\n");
	printf("1.insert\n2.delete\n3.display\n4.exit\n");
	scanf("%d",&choice);
	     
		switch(choice)
	    {
		case 1:enqueue();break;
		case 2:dequeue();break;
		case 3:display();break;
		case 4:exit(0);
		default:printf("invalid choice!!");
		}
    }
}

void enqueue()
{
	int x;
	if(rear==MAX-1)
	{
		printf("queue is full!!\n");
	}
	printf("enter the element:");
	scanf("%d",&x);
	rear++;
	queue[rear]=x;
}
 void dequeue()
 {
 	if(rear==-1 && front==0)
 	 {
 		printf("queue is empty!!\n");
	 }
	 else if(front==rear)
	 {
	 	printf("deleted element is %d",queue[front]);
	 	front=0;
	 	rear=-1;
	 }
	 else
	 {
	 	printf("deleted element is %d",queue[front]);
	    front++;
	 }
 }
void display()
{
	int i;
	if(rear==-1 && front==0)
	{
		printf("queue is empty!");
	}
		else
		{
			for( i=front;i<=rear;i++)
			printf("%d\t",queue[i]);
			printf("\n");
		}
}










