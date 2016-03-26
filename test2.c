#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
main()
{
FILE *f;
int i;
char *c,buf;
c=(char*)malloc(1000*(sizeof(char)));
f=fopen("3.c","r");
for(i=0;buf!=EOF;i++)
{
        buf=fgetc(f);
        c[i]=buf+10;
}
fclose(f);
f=fopen("3.c","w");
fputs(c,f);
fclose(f);
}
