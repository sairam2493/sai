#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
	int data;
	struct node *next;
}*first=NULL;
void main()
{
	int n,num,rem;
	struct node *temp;
	printf("enter no.of digits\n");
	scanf("%d",&n);
	printf("enter a number\n");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		if(first==NULL)
		{
			first=(struct node*)malloc(sizeof(struct node));
			first->data=rem;
			first->next=NULL;
		}
		else
		{
			temp=(struct node *)malloc(sizeof(struct node));
			temp->data=rem;
			temp->next=first;
			first=temp;
		}
	num=num/10;
	}
	for(temp=first;temp!=NULL;temp=temp->next)
	{
	if(temp->next==NULL)
	printf("%d",temp->data);
	 else
	printf("%d->",temp->data);
	}
	getch();
}