#include<stdio.h>
#include<string.h>

main()
{

char name[]={'a','b','c','\0'};
char fname[10];
char n;
int i,j,l;


printf("name is %s",name );
printf("enter the name");
scanf("%s",fname);
printf("name is %s",fname);
l=strlen(fname);

for(i=0;i<=l;i++)
{
for(j=0;j<i;j++)
{
printf("%c",fname[j]);
}
printf("\n");
}

}

