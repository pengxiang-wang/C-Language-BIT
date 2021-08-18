#include<stdio.h>
int main()
{
	int n1,n2,n20,n3,line1,linen,i,i0,j,k,l;
	scanf("%d%d",&n1,&n2);
	if(n1==1) printf("%d\n",n2);
	else{if(n1%2==0)
	{n20=n2;
		for(line1=0;line1<((n1-2)/2+n1);line1++)
	       {printf("%-2d",n20);
	        if(n20==9) n20-=10;n20++;
		   }
		   n20--;
		for(line1=0;line1<((n1-2)/2+n1);line1++)
	       {if(line1==((n1-2)/2+n1)-1)printf("%d",n20);
	       else printf("%-2d",n20);
	        if(n20==0) n20+=10;n20--;
		   }
		putchar('\n');
	for(i=2,i0=i;i<=n1-1;i++,i0++)
	   {
	    for(j=1;j<i;j++)
	     printf("  ");
	    for(k=1;k<=((n1-2*i)/2+n1)*2;k++)
	     {if(k==1||(k==((n1-2*i)/2+n1)*2)) {if(n2+i0-1==10) i0-=10;
		 if(k==((n1-2*i)/2+n1)*2)printf("%d",n2+i0-1);
		 else printf("%-2d",n2+i0-1);}
	     else printf("  ");
		 }
		putchar('\n');
	    if(n20==10) n20-=10;n20++;
	   } 
	   n20++;
	for(l=1;l<=n1-1;l++)
        printf("  ");
    for(linen=n1-1;linen<(n1-2)/2+n1;linen++)
	       {n20++;n3=n20%10;
	        printf("%-2d",n3);
		   }
		   n20++;
		for(linen=n1-1;linen<(n1-2)/2+n1;linen++)
	       {n20--;n3=n20%10;
	        if(linen==(n1-2)/2+n1-1) printf("%d",n3);else printf("%-2d",n3);
	       }
		putchar('\n');
	}
	else  
	{
		n20=n2;
		for(line1=0;line1<=((n1-2)/2+n1);line1++)
	       {printf("%-2d",n20);
	        if(n20==9) n20-=10;n20++;
		   }
		   n20--;n20--;
		for(line1=1;line1<=((n1-2)/2+n1);line1++)
	       {if(line1==((n1-2)/2+n1))printf("%d",n20);
	       else printf("%-2d",n20);
	        if(n20==0) n20+=10;n20--;
		   }
		putchar('\n');
	for(i=2,i0=i;i<=n1-1;i++,i0++)
	   {
	    for(j=1;j<i;j++)
	     printf("  ");
	    for(k=1;k<=2*((n1-2)/2+n1-i)+3;k++)
	     {if(k==1||k==2*((n1-2)/2+n1-i)+3) {if(n2+i0-1==10) i0-=10;
		 if(k==2*((n1-2)/2+n1-i)+3) printf("%d",n2+i0-1);
		 else printf("%-2d",n2+i0-1);}
	     else printf("  ");
		 }
		putchar('\n');
	    if(n20==10) n20-=10;n20++;
	   } 
	   n20++;
	for(l=1;l<=n1-1;l++)
        printf("  ");
    for(linen=n1-1;linen<(n1-2)/2+n1;linen++)
	       {n20++;n3=n20%10;
	        printf("%-2d",n3);
		   }
		   n20++;n20++;
		for(linen=n1-1;linen<=(n1-2)/2+n1;linen++)
	       {n20--;n3=n20%10;
	        if(linen==(n1-2)/2+n1) printf("%d",n3);else printf("%-2d",n3);
	       }
	       putchar('\n');
	}
	}
}
