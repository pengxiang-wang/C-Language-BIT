#include<stdio.h>
int n;
int func(int i,int j)
{
	if(i==1&&j==1) return 1;
	else if(i==1) 
        	{if(j%2==0) return func(i,j-1)+1;
             else  return func(i+1,j-1)+1;
	        }
	else if(j==1)
	        {if(i%2==1) return func(i-1,j)+1;
	         else  return func(i-1,j+1)+1;
			}
	else if(i==n)
	        {if(j%2==(n%2?1:0)) return func(i,j-1)+1;
	         else  return func(i-1,j+1)+1;
			}
	else if(j==n)
	        {if(i%2==(n%2?1:0)) return func(i+1,j-1)+1;
	         else  return func(i-1,j)+1;
			}
	else if((i+j)%2==0) return func(i+1,j-1)+1;
	else return func(i-1,j+1)+1;
}
int main()
{
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  {for(j=1;j<=n;j++)
	    if(j==1)
	    printf("%2d",func(i,j));
	    else printf("%3d",func(i,j));
	   printf("\n"); 
	    } 
}
