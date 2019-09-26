#include<stdio.h>
#include<stdlib.h>
#define size=5;
int q[size],f=-1,r=-1;
void insertion();
int deletion();
int is_full();
int is_empty();

int main()
{
	int ch;
	printf(" 1-insertion \n 2-deletion  \n 3-display");
	do
	{
	printf("enter your choice");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			insertion(n);
			break;
		case 2:
			deletion();
			break;
		case 3:
			display();
			break;
	}
	}while(ch!=4);
	return 0;
}

int insertion(int n)
{
	int val;
	if(r==size-1)
	{
		printf("queue is full");
	}
	else
	{
		if(f==-1)
		{
			printf("enter the element");
			scanf("%d",&val);
			r++;
			q[r]=val;
		}
	}
}
int deletion()
{
	if(f==-1||f>r)
	{
		printf("queue is empty");
	}
	else
	{
		printf("element deleted from queue is : %d",q[f]);
		f++;
	}
}


void display()
{
	int i;
	printf("queue elements are :");
	for(i=f;i<=r;i++)
	{
		printf("%d",q[i]);
	}
}
