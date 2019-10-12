#include<stdio.h>
void main()
{
char str[10];
int i;
printf("enter the alphabet");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>=65 && str[i]<=90)
  str[i]=str[i]+32;
else
 str[i]=str[i]-32;
printf("%c",str[i]);
}
}
