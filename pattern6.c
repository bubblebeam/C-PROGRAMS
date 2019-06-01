#include<stdio.h>
main()
{
int i,j;
for(i=1;i<=4;i++)
{
printf("\n");
for(j=1;j<=4-i;j++)
printf(" ");
for(j=1;j<=i;j++)
printf(" *");
}
}

/*
output:-
    *
   **
  ***
 ****
*/
