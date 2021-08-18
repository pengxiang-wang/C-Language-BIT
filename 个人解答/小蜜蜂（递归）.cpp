#include<stdio.h>
int f(int n,int n0) //计算在n个1中折叠n0对数的可能的方案； 
{   
    int i,A=0;
	if(n0==0) return 1;
	else if(n<2*n0) return 0;
	else { 
	      for(i=2;i<=n-2*n0+2;i++) 
		     A+=f(n-i,n0-1);// 固定一对后，问题转化为从剩余的 n-i个1中折叠n0-1对数的可能的方案； 
		  return A;
	}
}
int main()
{
	int a,b,c,N=0,i;
	scanf("%d%d",&a,&b);
	c=b-a;
	for(i=0;i<=c/2;i++)//从c个1中折叠0、1、2、…、c/2对可能的方案数之和 
	   N+=f(c,i);
	printf("%d\n",N);
}
