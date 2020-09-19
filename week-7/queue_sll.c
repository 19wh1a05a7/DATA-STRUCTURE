

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *f = NULL , *r = NULL , *cur;
void enqueue()
{
	cur = (struct node*)malloc(sizeof(struct node));
	printf("Enter data to insert:\n");
	scanf("%d",&(cur->data));
	cur->link = NULL;
	if(f == NULL)
		f = r = cur;
	else
	{
		r->link = cur;
		r = cur;
	}
}
void dequeue()
{
	if(f == NULL)
		printf("Queue underflow\n");
	else if(f == r)
	{
		printf("Deleted data %d\n",f->data);
		f = r = NULL;
	}
	else
	{
		cur = f;
		f = f->link;
		printf("Deleted data is %d\n",cur->data);
		free(cur);
	}
}
void display()
{
	if(f == NULL)
		printf("Queue is Empty\n");
	else
	{
		cur = f;
		while(cur != NULL)
		{
			printf("%d->" , cur->data);
			cur = cur->link;
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1-enqueue\n2-dequeue\n3-display\n4-exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: enqueue();
			break;
		case 2: dequeue();
			break;
		case 3: display();
			break;
		case 4: exit(0);
		}
	}
}
output:
C:\TDM-GCC-64\dslab>queue_sll
1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
3
Queue is Empty
1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
1
Enter data to insert:
30

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
1
Enter data to insert:
40

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
1
Enter data to insert:
50

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
1
Enter data to insert:
60

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
3
30->40->50->60->
1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
1
Enter data to insert:
10

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
1
Enter data to insert:
20

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
3
30->40->50->60->10->20->
1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
2
Deleted data is 30

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
2
Deleted data is 40

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
2
Deleted data is 50

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
2
Deleted data is 60

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
2
Deleted data is 10

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
2
Deleted data 20

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
2
Queue underflow

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
1
Enter data to insert:
30

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
3
30->
1-enqueue
2-dequeue
3-display
4-exit
Enter your choice

1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
4

C:\TDM-GCC-64\dslab>
















































































































