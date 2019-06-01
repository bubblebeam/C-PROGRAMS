#include<stdio.h>
 main()
{
char ch;
printf("enter alphabet of your choice\n");
scanf("%c",&ch);
switch (ch)
{
case 'a': printf("vowel");
case 'e': printf("vowel");
case 'i': printf("vowel");
case 'o': printf("vowel");
case 'u': printf("vowel");
default: printf("not a vowel");
}
}
