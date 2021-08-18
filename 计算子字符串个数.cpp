#include<stdio.h>
#include<string.h> 
int countsub(char*str,char*ss);
main()
{
    char s1[1000]={0},s2[100]={0};
    gets(s1);
    gets(s2);
    printf("%d\n",countsub(s1,s2));
}
int countsub(char *str,char *ss)
{
	static int i,j,k,flag=0,num[10],num0[10],m;static char a[100];
	for(i=0;i<strlen(str)-strlen(ss);i++)
	{
		for(j=i;j<i+strlen(ss);j++)
		  a[j-i]=str[j];
		if(strcmp(ss,a)==0) {
			num[k]=i;k++;
		}
	}
	flag=0;m=0;
	for(i=1;i<k;i++)
	num0[i]=num[i]-num[i-1];
	for(i=1;i<k;i++)
	{
	if(num0[i]!=strlen(ss)) {
		if(flag>m) m=flag;
		flag=0;
	     } 
	else flag++;
	}
	return m+1;
}
