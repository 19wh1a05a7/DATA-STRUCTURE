#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int f=-1,r=-1,queue[maxsize];
int isfull()
{
	if(r==maxsize-1)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(f==-1)
	return 1;
	else
	return 0;
 }
void enqueue(int data)
{
	if(f==-1)
		f=0;
	queue[++r]=data;
}
int dequeue()
{
	int x=queue[f];
	if(f==r)
		f=r=-1;
	else
		f++;
	return x;
}
void display()
{
	int i;
	for( i=f;i<=r;i++)
		printf("%d\t",queue[i]);
}
int main()
{
	int ch,x;
	while(1)
	{
	printf("\n1-enqueue\n2-dequeue\n3-display\n4-exit\n");
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1: if(isfull())
		printf("queue overflow\n");
		else
		{
			printf("enter data to insert\n");
			scanf("%d",&x);
			enqueue(x);
		}
		break;
	case 2: if(isempty())
		printf("queue underflow\n");
		else
		{
			printf("deleted element %d\n",dequeue());
			if(f==r)
			f=r=-1;
		}
		break;
	case 3 :display();
		break;
	case 4 :exit(0);
		break;
	}
	}
}
output:

Setting up environment for using MinGW with GCC from C:\TDM-GCC-64\.

C:\TDM-GCC-64>cd dslab

C:\TDM-GCC-64\dslab>gcc queue_array.c -o queue_array

C:\TDM-GCC-64\dslab>queue_array

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
1
enter data to insert
3

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
1
enter data to insert
6

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
1
enter data to insert
9

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
1
enter data to insert
8

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
3
3       6       9       8
1-enqueue
2-dequeue
3-display
4-exit
enter your choice
2
deleted element 3

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
1
enter data to insert
6

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
1
queue overflow

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
2
deleted element 6

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
2
deleted element 9

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
2
deleted element 8

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
2
queue underflow

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
3
0
1-enqueue
2-dequeue
3-display
4-exit
enter your choice
4

C:\TDM-GCC-64\dslab>