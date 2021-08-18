#include<stdio.h>
#include<string.h>
static char a[100][200],b[100][200],c[200],ch[200][200],result[100][200],result0[200];
int main()
{
	void convert(int i,char ch[]);void plus(char a[],char b[],int i);void minus(char a[],char b[],int i);
    int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  {
	  	scanf("%s",&ch[i]);
	  	convert(i,ch[i]);
	  	if(c[i]=='+') plus(a[i],b[i],i);
	  	else  minus(a[i],b[i],i);
	  }
	for(i=0;i<n;i++)
      printf("%s\n",result[i]);
	 
}
int strl(char a[])
{
	int i;
	for(i=99;a[i]==0;i--);
	return i+1;
}
void convert(int i,char ch[])
{
	int k,p,j;char m;
	for(k=0;ch[k]!='+'&&ch[k]!='-';k++)
	 a[i][k]=ch[k];
	c[i]=ch[k];
	p=k;
	for(k=p+1;k<strl(ch);k++)
	 b[i][k-p-1]=ch[k];
	 
	for(j=0;j<strl(a[i])/2;j++)
	 {
	 	m=a[i][j];a[i][j]=a[i][strl(a[i])-1-j];a[i][strl(a[i])-1-j]=m;
	 }
	for(j=0;j<strl(b[i])/2;j++)
	 {
	 	m=b[i][j];b[i][j]=b[i][strl(b[i])-1-j];b[i][strl(b[i])-1-j]=m;
	 }
}
int compare(char a[],char b[],char result[],int i)
{
	int A,j,m;
	if(strl(a)>strl(b))  return 1;
	else if(strl(a)<strl(b))  return 0;
	else
	{
	for(j=0;j<strl(a)/2;j++)
	 {
	 	m=a[j];a[j]=a[strl(a)-1-j];a[strl(a)-1-j]=m;
	 }
	for(j=0;j<strl(b)/2;j++)
	 {
	 	m=b[j];b[j]=b[strl(b)-1-j];b[strl(b)-1-j]=m;
	 }
	 A=strcmp(a,b);
	 for(j=0;j<strl(a)/2;j++)
	 {
	 	m=a[j];a[j]=a[strl(a)-1-j];a[strl(a)-1-j]=m;
	 }
	for(j=0;j<strl(b)/2;j++)
	 {
	 	m=b[j];b[j]=b[strl(b)-1-j];b[strl(b)-1-j]=m;
	 }
	}
	return A;
}
void plus(char a[],char b[],int i)
{
	int j,m;
	if(strcmp(a,b)==0)
	result[i][0]='0';
	else
	{
	for(j=0;j<strl(a);j++)
	  a[j]-=48;
	for(j=0;j<strl(b);j++)
	  b[j]-=48;
	for(j=0;j<strl(a)+strl(b);j++)
	  result[i][j]=a[j]+b[j];
	for(j=0;j<strl(result[i]);j++)
	  {
	  	if(result[i][j]>=10) 
		  {
		  	result[i][j]-=10;
		  	result[i][j+1]++;
		  }
	  }
	for(j=0;j<strl(result[i]);j++)
	  result[i][j]+=48;
	for(j=0;j<strl(result[i])/2;j++)
	 {
	 	m=result[i][j];result[i][j]=result[i][strl(result[i])-1-j];result[i][strl(result[i])-1-j]=m;
	 }
	}
	
}
void minus(char a[],char b[],int i)
{
	int j,k,m;
	if(strcmp(a,b)==0)
	result[i][0]='0'; 
	else
	{
		
		if(compare(a,b,result[i],i)==1)
	{
	for(j=0;j<strl(a);j++)
	  result[i][j]=a[j]-b[j]+(b[j]?48:0);
	for(j=0;j<strl(result[i]);j++)
	  {
	  	if(result[i][j]<48)
		  {
		  	result[i][j]+=10;
		  	result[i][j+1]--;
		  }
	  }
	for(j=strl(result[i]);result[i][j]==0||result[i][j]==48;j--)
	   result[i][j]=0;
	for(j=0;j<strl(result[i])/2;j++)
	 {
	 	m=result[i][j];result[i][j]=result[i][strl(result[i])-1-j];result[i][strl(result[i])-1-j]=m;
	 }

	}
	else
	{
	if(strl(a)<strl(b))
	{
		for(k=strl(b);a[k]==0;k--)
		 a[k]='0'; 
	}
	for(j=0;j<strl(b);j++)
	  result[i][j]=b[j]-a[j]+(b[j]?48:0);
	for(j=0;j<strl(result[i]);j++)
	  {
	  	if(result[i][j]<48)
		  {
		  	result[i][j]+=10;
		  	result[i][j+1]--;
		  }
	  }
	for(j=strl(result[i]);result[i][j]==0||result[i][j]==48;j--)
	   result[i][j]=0;
	result[i][j+1]='-';
	for(j=0;j<strl(result[i])/2;j++)
	 {
	 	m=result[i][j];result[i][j]=result[i][strl(result[i])-1-j];result[i][strl(result[i])-1-j]=m;
	 }
	}
	
	}
}
