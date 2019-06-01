#include<stdio.h>
main()
{
FILE *fp;
char str[100],ch;
fp=fopen("file.txt","w");
printf("enter string u want to store");
fgets(str,100,stdin);
fputs(str,fp);
fclose(fp);
fp=fopen("file.txt","r");
while(ch!=EOF)
{
ch=fgetc(fp);
putchar(ch);
}
fclose(fp);
}
