#include<stdio.h>
int func1(int a,int b)
{
	if(a>=b&&a%b==0) return b;
	else if(a<b) return func1(b,a);
	else return func1(b,a%b);
}
int func2(int a,int b)
{
	return (a*b)/(func1(a,b));
}
int main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	printf("���Լ����%d\n��С��������%d\n",func1(a,b),func2(a,b));
}
