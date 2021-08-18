#include<stdio.h>
#include<string.h>
int main()
{
	char M[30],N[30],M1[30],N1[30];
	static int M2[37],N2[37];
	int W,base1,base2,i,j,k1,flag=0;
	scanf("%s%s",M,N);
	for(base1=2;base1<=36;base1++)
	 	for(i=0;i<strlen(M);i++)
	  {if(M[i]<58&&M[i]>47) M1[i]=M[i]-48;
		else M1[i]=M[i]-55;
		if(M1[i]>=base1) {M2[base1]=0;break;}
		for(W=1,j=1;j<strlen(M)-i;j++)
		   W=W*base1;
		M2[base1]+=W*M1[i];
	 }
	for(base2=2;base2<=36;base2++)
	  	for(i=0;i<strlen(N);i++)
	   {if(N[i]<58&&N[i]>47) N1[i]=N[i]-48;
		  else N1[i]=N[i]-55;
		if(N1[i]>=base2) {N2[base2]=0;break;}
		for(W=1,j=1;j<strlen(N)-i;j++)
		   W=W*base2;
		N2[base2]+=W*N1[i];
	   }
	for(i=2;i<=36;i++)
	   for(j=2;j<=36;j++)
	      {
	      	if(M2[i]==N2[j]&&M2[i]!=0) 
			  {flag++;for(k1=0;k1<strlen(M);k1++) printf("%c",M[k1]);
			          printf(" (base %d) = ",i);
			          for(k1=0;k1<strlen(N);k1++) printf("%c",N[k1]);
					  printf(" (base %d)\n",j);goto S; 
			  }
		  }
	S:if(flag==0) {for(k1=0;k1<strlen(M);k1++) printf("%c",M[k1]);
	               printf(" is not equal to ");
				   for(k1=0;k1<strlen(N);k1++) printf("%c",N[k1]);
				   printf(" in any base 2..36\n");}
}
