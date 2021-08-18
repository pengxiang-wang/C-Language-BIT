#include<stdio.h>
int main()
{
	int a,b,p;char c;
		scanf("%d%c%d",&a,&c,&b);
		switch (c){ 
		case 43:p=a+b;printf("%d\n",p);break;
		case 45:p=a-b;printf("%d\n",p);break;
		case 42:p=a*b;printf("%d\n",p);break;
		case 47:p=a/b;printf("%d\n",p);} 
}
