

// stack implementation using arrays
#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int a[maxsize],top=-1;
void push(int item)
{
	top++;
	a[top]=item;
}
int pop()
{
	return(a[top--]);
}
int isfull()
{
	if(top==maxsize-1)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
int peek()
{
	return(a[top]);
}
void display()
{
	for(int i=top;i>=0;i--)
	printf("%d ",a[i]);
}
int main()
{
	int ch,x;
	while(1)
	{
		printf("\n1-push\n2-pop\n3-display\n4-peek\n5-exit\n");
		printf("enter ur choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: if(isfull())
			printf("stack overflow\n");
			else
			{
			printf("enter data to push\n");
			scanf("%d",&x);
			push(x);
			}
			break;
		case 2: if(isempty())
			printf("stack underflow\n");
			else
			{
			x=pop();
			printf("deleted element is %d\n",x);
			}
			break;
		case 3: display();
			break;
		case 4: printf("top most element on the stack is %d\n", peek());
			break;
		case 5: exit(0);
		}
	}
}
//
output:
:\TDM-GCC-64\dslab>
C:\TDM-GCC-64\dslab>stack_array

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
10

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
20

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
3
20 10
1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
30

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
56

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
3
56 30 20 10
1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
2
deleted element is 56

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
2
deleted element is 30

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
4
top most element on the stack is 20

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
5
enter ur choice
2
stack underflow

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
2

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
4

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
5

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
6

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
7

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
stack overflow

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
5

C:\TDM-GCC-64\dslab>stack_Array

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
3

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
3

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
6

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
2

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
4

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
enter data to push
15

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
stack overflow

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
7

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1
stack overflow

1-push
2-pop
3-display
4-peek
5-exit
enter ur choice
1






























































































































