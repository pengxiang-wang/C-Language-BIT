#include<stdio.h>
int f(int n,int n0) //������n��1���۵�n0�����Ŀ��ܵķ����� 
{   
    int i,A=0;
	if(n0==0) return 1;
	else if(n<2*n0) return 0;
	else { 
	      for(i=2;i<=n-2*n0+2;i++) 
		     A+=f(n-i,n0-1);// �̶�һ�Ժ�����ת��Ϊ��ʣ��� n-i��1���۵�n0-1�����Ŀ��ܵķ����� 
		  return A;
	}
}
int main()
{
	int a,b,c,N=0,i;
	scanf("%d%d",&a,&b);
	c=b-a;
	for(i=0;i<=c/2;i++)//��c��1���۵�0��1��2������c/2�Կ��ܵķ�����֮�� 
	   N+=f(c,i);
	printf("%d\n",N);
}
