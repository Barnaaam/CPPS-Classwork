#include<stdio.h>
#include<string.h>
main()
{
char fname[25],cname[25];
printf("Enter the string:\n");
scanf("%s",fname);
strcpy(cname, fname);
printf("%s",cname);

}