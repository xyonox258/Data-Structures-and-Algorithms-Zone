#include<stdio.h>
void Enqueue(int A[],int *Rear,int size)
{
	if(*Rear==size-1)printf("The Queue is full\n");
	else
	{
		(*Rear)++;
		printf("Enter the element\n");
		scanf("%d",&A[*Rear]);
	}
}
void Dequeue(int A[],int *Front,int *Rear)
{
	if(*Front==*Rear)printf("The Queue is empty\n");
	else
	{
		(*Front)++;
		printf("%d\n",A[*Front]);
	}	
}
void Traverse(int A[],int *Front,int *Rear)
{
	if(*Front==*Rear)printf("The Queue is empty\n");
	else
	{
		int i=*Front+1;
		for(i=i;i<*Rear;i++)
		{
			printf("%d\t",A[i]);
		}
		printf("%d\n",A[*Rear]);
	}
}
int main()
{
	int Queue[20],size,*Rear,*Front,x=-1,y=-1,choice,n=2;
	Rear=&x;Front=&y;
	printf("Enter the size of the Queue\n");
	scanf("%d",&size);
	while(n!=0)
	{
		printf("Choose oparetion\n");
		printf("1.ENQUEUE\t2.DEQUEUE\t3.TRAVERSE\t");
		scanf("%d",&choice);
		if(choice==1)Enqueue(Queue,Rear,size);
		else if(choice==2)Dequeue(Queue,Front,Rear);
		else if(choice==3)Traverse(Queue,Front,Rear);
		else
		{
			printf("Invalid input\n");
		}
		printf("Do you want to continue if yes press 1 or if no press 0\n");
		scanf("%d",&n);
	}
	return 0;
	
}








