#include<stdio.h>
#include<string.h>
int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
void check18(char num[])
{
	int i,S=0,Y;
	for(i=0;i<17;i++)
	   S+=(num[i]-48)*w[i];
	Y=S%11;
	if(m[Y]==num[17])
	  printf("Valid\n");
	else printf("Invalid\n");
}
void check(char num[30])
{
	int i;
	i=strlen(num);
	if(i!=15)
	{
		if(i==18) check18(num);
		else printf("Invalid\n");
	}
	else
	{
		char num1[18]={num[0],num[1],num[2],num[3],num[4],num[5],'1','9',num[6],num[7],num[8],num[9],num[10],num[11],num[12],num[13],num[14],0};
		int S=0;
		if((num[12]=='9'&&num[13]=='9'&&num[14]=='6')||(num[12]=='9'&&num[13]=='9'&&num[14]=='7')||(num[12]=='9'&&num[13]=='9'&&num[14]=='8')||(num[12]=='9'&&num[13]=='9'&&num[14]=='9'))
		   	num1[7]='8';
		for(i=0;i<17;i++)
		  S+=(num1[i]-48)*w[i];
		num1[17]=m[S%11];
		puts(num1);
    }
}
int main()
{
	int n,i;char num[20][30];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	   gets(num[i]);
	for(i=0;i<n;i++)
	   check(num[i]);
}
