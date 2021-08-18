#include<stdio.h>
void even(int m,int M)
{
    int i,d4,d3,d2,d1,counter=0;
    if(m!=0||M!=0)
	   if(m/1000==0||m/10000!=0||M/1000==0||M/10000!=0)
	    printf("Error\n");
	   else{for(i=m+1;i<M;i++)
	            {d1=i%10;
	             d2=(i/10)%10;
	             d3=(i/100)%10;
	             d4=(i/1000)%10;
	        if(d1!=d2&&d1!=d3&&d1!=d4&&d2!=d3&&d2!=d4&&d3!=d4&&i%2==0)
	 	    {counter++; printf("%d  ",i);
			 }
	            }   
	        printf("\ncounter=%d\n",counter);
	       }
}
int main()
{
	int m[10],M[10],i,j;
	m[0]=1;M[0]=1;
	for(i=0;i<=100;i++)
	  {
	  	scanf("%d",&m[i]);
	  	scanf("%d",&M[i]);
		if(m[i]==0&&M[i]==0) break;
	  }
	for(j=0;j<=i;j++)
	  even(m[j],M[j]);
 }
