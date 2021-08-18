#include<stdio.h>
int main()
{
	int a,b,c,n,d1,i=0,j=0;
	scanf("%d%d%d",&a,&b,&c);
	scanf("%d",&n);
	switch(b)
	{
		case 1:d1=31;break;
		case 2:d1=(((a%4==0&&a%100!=0)||a%400==0)?29:28);break;
		case 3:d1=31;break;
		case 4:d1=30;break;
		case 5:d1=31;break;
		case 6:d1=30;break;
		case 7:d1=31;break;
		case 8:d1=31;break;
		case 9:d1=30;break;
		case 10:d1=31;break;
		case 11:d1=30;break;
		case 12:d1=31;break;
	}
	n=n-(d1-c);
	if(n<=0)  printf("%d.%d.%d\n",a,b,c+n+d1-c);
	else {if(b==12){b-=12;i++;}
	      b++;
	        do
	        {
	         for(;b<=12;)
		     {
		   	               switch(b)
	                        {
		                case 1:d1=31;break;
		                case 2:d1=(((a%4==0&&a%100!=0)||a%400==0)?29:28);break;
		                case 3:d1=31;break;
		                case 4:d1=30;break;
	 	                case 5:d1=31;break;
		                case 6:d1=30;break;
		                case 7:d1=31;break;
		                case 8:d1=31;break;
		                case 9:d1=30;break;
		                case 10:d1=31;break;
		                case 11:d1=30;break;
		                case 12:d1=31;break;
	                         }
		   	    n=n-d1;
		   	    if(n<=0) goto ii;
		   	    if(b==12){b-=12;i++;a++;}
	            b++;
		        }j++;
	           }while(j<1111111);
		ii:n=n+d1;
		printf("%d.%d.%d\n",a,b,n);   
	}
}
