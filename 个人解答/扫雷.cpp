#include<stdio.h>
static char fld[50][500][500],fldtemp[50][500][500],fldnum[50][500][500];
int main()
{
	void putnum(char fld0,int i,int k1,int k2);
	static int i,k1,k2,count,n[10],m[10];
	for(i=0;i<10;i++)
	{
		scanf("%d%d",&n[i],&m[i]);
		if(n[i]==0&&m[i]==0) break;
		getchar();
		for(k1=0;k1<n[i];k1++)
		{
		 for(k2=0;k2<m[i];k2++)
		   	fld[i][k1][k2]=getchar();
		 getchar();
		}
	}
	count=i;
	for(i=0;i<count;i++)
	 for(k1=0;k1<n[i];k1++)
	  for(k2=0;k2<m[i];k2++)
	    fldtemp[i][k1+1][k2+1]=fld[i][k1][k2];
	for(i=0;i<count;i++)
	 for(k1=0;k1<n[i];k1++)
	  for(k2=0;k2<m[i];k2++)
	    putnum(fldtemp[i][k1+1][k2+1],i,k1+1,k2+1);
	for(i=0;i<count;i++)
	{
		printf("Field #%d:\n",i+1);
		for(k1=0;k1<n[i];k1++)
		 {
		   for(k2=0;k2<m[i];k2++)
		    printf("%c",fldnum[i][k1][k2]);
	       if(i<count-1||k1!=n[i]) printf("\n");
		 }
		if(i<count-1) printf("\n");
	}
}
void putnum(char fld0,int i,int k1,int k2)
{
	int flag=0;
	if(fld0=='*') fldnum[i][k1-1][k2-1]='*';
	else
	{
		if(fldtemp[i][k1+1][k2+1]=='*') flag++;
		if(fldtemp[i][k1-1][k2-1]=='*') flag++;
		if(fldtemp[i][k1+1][k2-1]=='*') flag++;
		if(fldtemp[i][k1-1][k2+1]=='*') flag++;
		if(fldtemp[i][k1][k2+1]=='*') flag++;
		if(fldtemp[i][k1][k2-1]=='*') flag++;
		if(fldtemp[i][k1+1][k2]=='*') flag++;
		if(fldtemp[i][k1-1][k2]=='*') flag++;
		fldnum[i][k1-1][k2-1]=flag+'0';
	}
}
