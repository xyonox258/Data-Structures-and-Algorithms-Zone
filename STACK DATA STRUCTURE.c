#include<stdio.h>
void Push(int Stack[],int *Top,int size)
{
	if(*Top==size-1)printf("Stack is full");
	else
	{
		(*Top)++;
		printf("Enter the element\n");
		scanf("%d",&Stack[*Top]);
	}
}
void Pop(int Stack[],int *Top)
{
	if(*Top==-1)printf("Stack is empty\n");
	else
	{
		printf("Top data deleted sucsessfully\n");
		(*Top)--;
	}
}
void Traverse(int Stack[],int *Top)
{
	int i;
	if(*Top==-1)printf("Stack is empty\n");
	else
	{
		for(i=*Top;i>=0;i--)
		{
			printf("%d\n",Stack[i]);
		}
	}
}
int main()
{
	int *Top,x=-1,n=2,size;
	Top=&x;
	printf("Enter the size of the stack\n");
	scanf("%d",&size);
	while(n!=0)
	{
		int Stack[20],choice;
		printf("Choose oparetion\n");
		printf("1.PUSH\t2.POP\t3.Trevarse\t");
		scanf("%d",&choice);
		if(choice==1)Push(Stack,Top,size);
		else if(choice==2)Pop(Stack,Top);
		else if(choice==3)Traverse(Stack,Top);
		else
		{
			printf("invalid input\n");
		}
		printf("Do you want to continue if yes press 1 or if no press 0\n");
		scanf("%d",&n);
	}
	return 0;
}
