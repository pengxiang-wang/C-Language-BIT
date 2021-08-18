#include<stdio.h>
f(int a,int b,int c)
{
	int y=0,m=0,d,w,i;
	for(i=1900;i<a;i++)
	{
		if(i%4==0||(i%100==0&&i%400==0)) y=y+366;
		else y=y+365;
	}
	switch(b){
		case 12:m=m+30;
		case 11:m=m+31;
		case 10:m=m+30;
		case 9:m=m+31;
		case 8:m=m+31;
		case 7:m=m+30;
		case 6:m=m+31;
		case 5:m=m+30;
		case 4:m=m+31;
		case 3:if (a%4==0||a%100==0&&a%400==0) m=m+29;
		      else m=m+28;
		case 2:m=m+31;
		case 1:;}
	d=y+m+c-1;
	w=d%7; 
	return w;
}
int main()
{
	static int year,month,flag,a[12],i,j;
	scanf("%d",&year);
	for(month=1;month<=12;month++)
	  	if(f(year,month,13)==5)
	  	 {
	  	 	flag++;
	  	 	a[i]=month;
	  	 	i++;
		 }
	if(flag!=1)
	printf("There are %d Black Fridays in year %d.\nThey are:\n",flag,year);
	else printf("There is %d Black Friday in year %d.\nIt is:\n",flag,year);
	for(j=0;j<i;j++)
	  printf("%d/%d/13\n",year,a[j]);
 }
