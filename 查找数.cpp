#include<stdio.h>
int main()
{
	int a[10],i,n,*pa=a,flag=0;
	for(i=0;i<10;i++)
	 scanf("%d",&a[i]);
	scanf("%d",&n);
	for(i=0;i<10;i++)
	 {
	 	if(n==*(pa+i)) {
	 		printf("%d\n",n);flag=1;break;
		 }
	 }
	if(flag==0) printf("No\n");
}
