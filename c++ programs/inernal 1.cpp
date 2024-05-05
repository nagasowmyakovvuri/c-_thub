#include<stdio.h>
int main()
{
	int n,at[100],bt[100],temp[1000]
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
		temp[i]=bt[i];
	}
	int qt;
	scanf("%d",&qt);
	int cc=0,c=0;
	while(cc<n)
	{-
		if(bt[i]!=0)
		{
			if(bt[i]-qt>0)
			{
				bt[i]-=qt;
				c+=qt;
			}
			else
			{
				c+=bt[i];
				bt[i]=0;
				c++;
			    ft[i]=c;
			}
			
		}
		i=(i+1)%n;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",ft[i]);
	}
	
}
