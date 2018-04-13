#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int P[10],t[10],sort[10];

	int i=0,j=0,l,c,g,n;
	int s[]={0,0,0,0,0,0,0,0,0,0};
	
	for(i=0;i<10;i++)
	{
		printf("enter no of gifts for S%d :",i+1);
		scanf("%d",&s[i]);
	}
	
	void bill(int ind,int val)
	{
		if(s[ind]==0)
		{
			printf("no bill to genarate\n");
		}
		printf("S%d is billed - items	%d\n",ind+1,val);
		s[ind]=0;
		
	}

	int Sort()
{
	for(i=0;i<10;i++)
	{
	 sort[i]=s[i];
	 t[i]=s[i];
	}
	for(i=0;i<10;i++)
	{
	for(j=i+1;j<10;j++)
	{
		if(sort[i]<sort[j])
		{
			int temp=sort[i];
			sort[i]=sort[j];
			sort[j]=temp;
		}
	}
	}
}
Sort();
	for(i=0;i<10;i++)
	{
	 printf("%d\n",sort[i]);
	}
void call()
{
	
	for(i=0;i<10;i++)
	{
	 printf("enter %d to add gifts for S%d \n",i+1,i+1);
	}
	scanf("%d",&n);
	switch(n)
	{	
		case 1:
			printf("enter the no of gifts to be added to S1 \n");
			scanf("%d",&g);
			s[0]=s[0]+g;
			break;
			
		case 2:
			printf("enter the no of gifts to be added to S2 \n");
			scanf("%d",&g);
			s[1]=s[1]+g;
			break;
			
		case 3:
			printf("enter the no of gifts to be added to S3 \n");
			scanf("%d",&g);
			s[2]=s[2]+g;
			break;
			
		case 4:
			printf("enter the no of gifts to be added to S4 \n");
			scanf("%d",&g);
			s[3]=s[3]+g;
			break;
			
		case 5:
			printf("enter the no of gifts to be added to S5 \n");
			scanf("%d",&g);
			s[4]=s[4]+g;
			break;
			
		case 6:
			printf("enter the no of gifts to be added to S6 \n");
			scanf("%d",&g);
			s[5]=s[5]+g;
			break;
			
		case 7:
			printf("enter the no of gifts to be added to S7 \n");
			scanf("%d",&g);
			s[6]=s[6]+g;
			break;
			
		case 8:
			printf("enter the no of gifts to be added to S8 \n");
			scanf("%d",&g);
			s[7]=s[7]+g;
			break;
			
		case 9:
			printf("enter the no of gifts to be added to S9 \n");
			scanf("%d",&g);
			s[8]=s[8]+g;
			break;
			
		case 10:
			printf("enter the no of gifts to be added to S10 \n");
			scanf("%d",&g);
			s[9]=s[9]+g;
			break;
			
		default:
			printf("your no is out of range\n");
			printf("press 1 to allcate gifts again or any other no to exit\n");
			scanf("%d",&l);
			if(l==1)
			{
				call();
			}
	}
}

A:
		printf("press 1 to allcate gifts or 0 for bill or any other no to exit\n");
		scanf("%d",&l);
		if(l==1)
		{
			call();
			Sort();
			goto A;
		}
	
	else if(l==0)
{
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(sort[i]==s[j] && s[j]>0)
			{
				printf("S%d is billed - items	%d\n",j+1,s[j]);
				s[j]=0;
			}
		}
	}
	for(i=0;i<10;i++)
	{
	 s[i]=t[i];
	}
	goto A;
}
}
