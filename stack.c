//stack using arrays
//By varshith suniganti
#include<stdio.h>
#include<stdlib.h>
#define MAX 6

  void push();
  void pop();
  void peek();
  void display();
  
 int top=-1;
 int stack[MAX];
 
 
 void main()
 {
 	while(1) 
	{
 	int choice;
	 printf("enter your choice:\n");
 	printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
 	scanf("%d",&choice);
 		
		 switch(choice)
		{
		 	case 1:push();break;
			case 2:pop();break;
			case 3:peek();break;
			case 4:display();break;
			case 5:exit(0);	
			default:printf("invalid choice");	  
		}		
	}
 } 
   void push()
   {
   	int x;
   	printf("enter the number:\n");
   	scanf("%d",&x);
   	if(top==MAX-1)
   	{
   		printf("stack is overflow!!");
	   }
	   else{
	   	top++;
	   	stack[top]=x;
	   }
   }
   	void pop()
   	{
   		if(top>0)
   		{
   			return;
   	    } 
	}
	void peek()
	{
		printf("%d",stack[top]);
	}
	 void display()
	 {
	 	int i;
	 	for(i=0;i<=top;i++)
	 	{
	 		printf("%d\t",stack[i]);
		 }
	 }
	
	
	
	
	
	
	
	
	
	
	
	
	
