#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void Insert(int data)
{
	struct node *link = (struct node*)malloc(sizeof(struct node));
	link->data=data;
	link->next=head;
	head=link;
}
void PrintList()
{
	printf("[");
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		printf("%d,",ptr->data);
		ptr=ptr->next;
	}
	printf("]\n");
}
void DeleteFirst()
{
	struct node *ptr=head;
	printf("Deleted %d\n",ptr->data);
	head=ptr->next;
}
int main()
{
	printf("This is a Linked List\n");
	int n=2;
	while(n!=0)
	{
		int c,data;
		printf("Chose oparetion:\n1.Insert\t2.Delete\t3.PrintList\n");
		scanf("%d",&c);
		if(c==1)
		{
			printf("Enter Data:\t");
			scanf("%d",&data);
			Insert(data);	
		}
		else if(c==2)DeleteFirst();
		else if(c==3)PrintList();
		else
		{
			printf("Invalid Input\n");
		}
		printf("Do you want to continue if yes press 1 or no press 0\n");
		scanf("%d",&n);
	}
}
