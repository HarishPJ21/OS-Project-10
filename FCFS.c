#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{	
	int n,AveTAT=0,AveWT=0;
	printf("enter the no of process :");
	scanf("%d",&n);
	int P[n],AT[n],C,BT[n],CT[n],TAT[n],WT[n],sort[n],L[n],Pro[n];
	int i=0,j=0,c;
	int max(int a,int b)
	{
		if(a>b)
		{
		return a;}
		else
		{
		return b;}
	}
	while(i<n||j<n)
	{
		printf("enter the arrival time of process %d :",i);
		scanf("%d",&AT[i]);
		if(AT[i]<0)
		{
			printf("you entered negative integer\n");
			exit;
		}
		i++;
		printf("enter the burst time of process %d :",j);
		scanf("%d",&BT[j]);
		if(BT[j]<0)
		{
			printf("you entered negative integer\n");
			exit;
		}
		j++;
	}
	for(i=0;i<n;i++)
	{
	 L[i]=AT[i];
	}

	int Sort()
{
	for(i=0;i<n;i++)
	{
	 sort[i]=AT[i];
	}
	for(i=0;i<5;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(sort[i]>sort[j])
		{
			int temp=sort[i];
			sort[i]=sort[j];
			sort[j]=temp;
		}
	}
	}
}

	Sort();
	c=0;
	for(j=0;j<n;j++)
	{
			if(sort[0]==L[j])
			{
				L[j]=-1;
				CT[j]=BT[j]+AT[j];
				C=CT[j];
				Pro[0]=j;
				break;
			}
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(sort[i]==L[j])
			{
				L[j]=-1;
				CT[j]=BT[j]+max(C,AT[j]);
				C=CT[j];
				Pro[i]=j;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		TAT[i]=CT[i]-AT[i];
		WT[i]=TAT[i]-BT[i];
	}
	
	printf("p \t AT \t BT \t CT \t TAT \t WT\n");
	for(i=0;i<n;i++)
	{
		printf("%d \t %d \t %d \t %d \t %d \t %d\n",i,AT[i],BT[i],CT[i],TAT[i],WT[i]);
		AveTAT=AveTAT+TAT[i];
		AveWT=AveWT+WT[i];
	}	
		printf("\nSequence\n");
	for(i=0;i<n;i++)
	{
		printf("P%d\t",Pro[i]);
	}	
		
		printf("\n\naverage TAT %f \t",(float)AveTAT/n);
		printf("\n\naverage WT %f \t",(float)AveWT/n);
		
}
