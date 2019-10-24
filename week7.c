#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,min,max,m,c=0,p;
	float avr;
printf("enter the queue length\n");
scanf("%d",&n);
printf("enter the min threshold\n");
scanf("%d",&min);
printf("max should be always less than given queue length\n");
printf("enter the max threshold\n");
scanf("%d",&max);
i=0;
printf("enter tye number fo packets\n");
scanf("%d",&m);
while(i<=m)
{
	avr=(min+max)/2;
	printf("enter the packet size\n");
	scanf("%d",&p);
	if(p<min)
	{
	printf("packet is taken\n");
	c++;
	max-=p;
}
else if(p>min && p<max)
{
	if(p>avr)
	printf("packet is lost\n");
	else
	{
		printf("packet is taken\n");
		c++;
		max-=p;
	}
}
else
{
	printf("packet is lost\n");
}
i++;
}
printf("the number of packets taken are %d\n",c);
printf("the number fo apckets lost are %d",(m-c+1));
return 0;
}