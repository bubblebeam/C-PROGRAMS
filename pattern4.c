#include<stdio.h>
main()
{
int i,j;
char cnt='A';
for(i=4;i>=1;i--)
{
printf("\n");
for(j=1;j<=i;j++)
{
printf("%c  ",cnt);
cnt++;
}
cnt='A';
}
}
/*
output:-
  A  B  C  D
  A  B  C
  A  B
  A
*/

