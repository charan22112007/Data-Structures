#include<stdio.h>
#include<stdlib.h>
struct cirqueue
{
	struct cirqueue *pre;
	int data;
	struct cirqueue *next;
};
struct cirqueue *front = NULL, *rear = NULL, *temp = NULL;
void enqueue()
{
	struct cirqueue *newnode = NULL;
	newnode = (struct queue *)malloc(sizeof(struct queue));
	printf("\nEnter the data of the element : ");
	scanf("%d",&newnode->data);
	newnode->next = NULL;
	newnode->pre = NULL;
	if(front == NULL)
	{
		front = rear = newnode;
	}
	else
	{
		rear->next = newnode;
		newnode->pre = rear;
		rear = newnode;
	}
}
