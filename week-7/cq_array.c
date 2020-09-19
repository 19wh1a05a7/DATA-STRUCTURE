

#include<stdio.h>
#include<stdlib.h>
#define maxsize 6
int f =-1,r=-1,cq[maxsize];
int isfull()
{
	if(f==(r+1)%maxsize)
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
void enqueue(int x)
{
	if(f==-1)
		f=0;
	r=((r+1)%maxsize);
	cq[r]=x;
}
int dequeue()
{	
	int x;
	x=cq[f];
	if(f==r)
		f=r=-1;
	else
	{
		f=((f+1)%maxsize);
	}
	return x;
}
void display()
{
	int i;
	if(f==-1)
		printf("cq is empty\n");
	if (r >= f) 
    { 
        for (int i = f; i <= r; i++) 
            printf("%d ",cq[i]); 
    } 
    else
    { 
        for (int i = f; i < maxsize; i++) 
            printf("%d ", cq[i]); 
  
        for (int i = 0; i <= r; i++) 
            printf("%d ", cq[i]); 
    } 
	
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
		printf(" circular queue overflow\n");
		else
		{
			printf("enter data to insert\n");
			scanf("%d",&x);
			enqueue(x);
		}
		break;
	case 2: if(isempty())
		printf("cq is empty\n");
		else
		{
			printf("deleted element %d\n",dequeue());
			
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
C:\TDM-GCC-64\dslab>cq_array

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
3
cq is empty
0
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
4

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
1
enter data to insert
5

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
7

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
3
3 4 5 6 7
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
2
deleted element 4

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
2
deleted element 5

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
deleted element 7

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
2
cq is empty

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
1
enter data to insert
20

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
8

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
10

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
1
 circular queue overflow

1-enqueue
2-dequeue
3-display
4-exit
enter your choice
3
1-enqueue
2-dequeue
3-display
4-exit
enter your choice
3
20 3 6 8 9 10
1-enqueue
2-dequeue
3-display
4-exit
Enter your choice
4

C:\TDM-GCC-64\dslab>















































































































































