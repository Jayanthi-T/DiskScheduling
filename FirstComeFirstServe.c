#include<stdio.h>  
#include<conio.h>
#include<stdlib.h>
int main()
{
	int head,size,req[20],i,sum=0,diff;
	printf("Enter the initial head position:");
	scanf("%d",&head);
	printf("Enter the total size of request sequence:”);
	scanf("%d",&size);
	printf("Enter the request sequence elements:");
	for(i=0;i<size;i++)
	scanf("%d",&req[i]);
	sum=req[0]-head;
	for(i=0;i<size-1;i++)
	{
		diff=abs(req[i]-req[i+1]);
		sum=sum+diff;
	
		
	}
	printf("\nTotal no of seek operations:%d\n",sum);
	printf(“The sequence of working :\n");
	for(i=0;i<size;i++)
	printf("%d\t",req[i]);
}

