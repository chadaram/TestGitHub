#include<stdio.h>
#include<stdlib.h>
main()
{
int yes=1,no=0,choice,a,b,i,n,v[100][100];
printf("enter the no. of nodes:");
scanf("%d",&n);
for(a=1;a<n;a++)
{
for(b=1;b<n;b++)
{
printf("is there any edge between v-a and v-b");
}
}
printf("type yes or no");
scanf("%d",&choice);
if(choice==yes)
{
v[a][b]=1;
}
elseif(choice==no)
{v[a][b]=0;
}
printf("the adjacency matrix is:");
for(a=1;a<n;a++)
{
for(b=1;b<n;b++)
{
printf("%3d",v[a][b]);
}
printf("\n\n");
}
}
