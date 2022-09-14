#include<stdio.h>
int main()
{
	int i;
	int *p;
	p=new int[5];
	printf("\nEnter element of array :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("\nElement present in array :");
	for(i=0;i<5;i++)
	{
		printf("\t%d",p[i]);
	}
	delete[]p;
}
