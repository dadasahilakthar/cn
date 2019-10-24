#include<stdio.h>
void dijkstra(int g[10][10],int n,int start,int des)
{
 int cost[10][10],d[10],p[10];
 int v[10],count,mindis,next,i,j;
 printf("packet is sent");
 for(i=0;i<n;i++)
   for(j=0;j<n;j++)
     if(g[i][j]==0)
       cost[i][j]=999;
     else
       cost[i][j]=g[i][j];
 for(i=0;i<n;i++)
 {
  d[i]=cost[start][i];
  p[i]=start;
  v[i]=0;
 }
 d[start]=0;
 v[start]=1;
 count=1;
 while(count<n-1)
 {
  mindis=999;
  for(i=0;i<n;i++)
  {
   if(d[i]<mindis && !v[i])
   {
    mindis=d[i];
    next=i;
   }
  }
  v[next]=1;
  for(i=0;i<n;i++)
  {
   if(!v[i])
   {
    if(mindis + cost[next][i]<d[i])
    {
     d[i]=mindis + cost[next][i];
     p[i]=next;
    }
   }
  }
  count++;
 }
 if(d[des]!=999)
 {
  printf("packet recieved");
  printf("distance from %c to %c is %d",(char)(start+97),(char)(des+97),d[des]);
  printf("path\n%c",(char)(des+97));
  j=des;
  g[p[j]][des]=0;
  do{
  j=p[j];
  printf("<-%c",(char)(j+97));
  }while(j!=start);
  }
  else
  printf("packet is not able to recieve");
  if(d[des]!=999)
  {
   printf("If delay occurs then \n");
   dijkstra(g,n,start,des);
  }
  else
  printf("no further path exists");
}

int main()
{
 int g[10][10]={{0,5,2,3,0},{5,0,4,0,3},{2,4,0,0,4},{3,0,0,0,0},{0,3,4,0,4}};
 int n=5,i,j;
 char u,des;
 printf("enter source and destination");
 scanf("%c %c",&u,&des);
 dijkstra(g,n,(int)u-97,(int)des-97);
 
}