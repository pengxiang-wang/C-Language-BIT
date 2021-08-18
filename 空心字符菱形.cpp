#include<stdio.h>
int main()
{
	int n,i=1,j,k;char ch;
	scanf("%c%d",&ch,&n);
	for(i=1;i<=n;i++)
	 {
	 	for(j=1;j<=n-i;j++)
	 	 printf(" ");
	 	for(k=1;k<=2*i-1;k++)
	 	 {if(k==1||k==2*i-1)
	 	   printf("%c",ch);
	 	  else printf(" ");
		  }
		ch++;
	  printf("\n");
	 }
	 ch-=2;
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
	 	 printf(" ");
	 	for(k=1;k<=2*i-1;k++)
	 	 {if(k==1||k==2*i-1)
	 	   printf("%c",ch);
	 	  else printf(" ");
		  }
	 ch--;
	 if(i!=1)printf("\n");
	}
}
