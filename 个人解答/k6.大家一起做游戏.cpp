#include<stdio.h>
int main()
{
	static char a[50];
	int N,m,i,baoshu,flag=0;//flag �߳�ȥ�ĸ��� 
	scanf("%d%d",&N,&m);
	i=0;baoshu=0; 
	while(flag!=N)
	{
	   if(i==N) i-=N;
	   if(a[i]==1) 
	   {
	   	i++;continue;
	   }
	   baoshu++;
	   if(baoshu==m) 
	   {
	   	baoshu-=m;
	    a[i]==1;
		flag++;
	   }
	   i++;
	   if(flag==N) break;
	}
	printf("The left child is NO %d.\n",i);
}
