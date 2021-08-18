#include<stdio.h>
int strl(char a[])
{
	int i;
	for(i=199;a[i]==0;i--);
	return i+1;
}
int main()
{
	static char a[100][200];int n,i,j,f1,f2,f3,f4,f;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	  gets(a[i]);
	for(i=0;i<n;i++)
	{
		if(strl(a[i])<6) printf("Not Safe\n");
		else {f1=0;f2=0;f3=0;f4=0;
			for(j=0;j<strl(a[i]);j++)
			  {
			  	if(a[i][j]>=48&&a[i][j]<=57) f1=1;
			  	else if(a[i][j]>=65&&a[i][j]<=90) f2=1;
			  	else if(a[i][j]>=97&&a[i][j]<=122) f3=1;
			  	else f4=1;
			  }
			  f=f1+f2+f3+f4;
			  switch(f)
			  {
			  case 1:printf("Not Safe\n");break;
			  case 2:printf("Medium Safe\n");break;
			  case 3:printf("Safe\n");break;
			  case 4:printf("Safe\n");
			  }
		     }
	}
}
