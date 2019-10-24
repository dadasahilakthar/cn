#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,st,op,ip,bs,sl;
	st=0;
	n=4;
	bs=10;
	ip=4;
	op=1;
	for(i=0;i<n;i++)
	{
		sl=bs-st;
		if(ip<=sl)
		{
			st=st+ip;
			printf("Buffer size = %d out of bucket size = %d\n",st,bs);
		}
		else
		{
			printf("packet loss = %d\n ",(ip-sl));
			st=bs;
			printf("Buffer size = %d out of bucket size = %d\n",st,bs);
		}
		st=st-op;
		
	}
	return 0;
}
		
			
	
