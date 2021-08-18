#include<stdio.h>
int main()
{
	int m,M,i,n,d4,d3,d2,d1,counter;
	for(n=1;n<100;n++)
	{counter=0;
	scanf("%d%d",&m,&M);
	if(m==0||M==0) break;
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
 } 
