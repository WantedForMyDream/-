#include<stdio.h>
#include<math.h>
int main()
{
	int a[5],b[5],c[5],t1[5];
	int i,count=0,sum=0,floor=1;
	for(i=0;i<5;i++)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<5;i++)
	{
		t1[i]=abs(b[i]-floor)+1;
		if(c[i]==1)
		{
			if(floor==1)
			{
				count=count+2*(b[i]-1)+1;
			}
			else
			{
				count=count+10;
			}
			floor=1;
		}
		else
		{
			if(floor==1)
			{
				count=count+10;
			}
			else
			{
				count=count+2*(10-b[i])+1;
			}
			floor=10;
		}
		sum=sum+count-a[i];
		printf("%dÊ±£¬Í£¿¿ÔÚ%d²ã %d\n",count,floor,t1[i]);
	}
	printf("%d",sum);
	return 0;
} 
