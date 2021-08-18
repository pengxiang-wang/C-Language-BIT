#include<stdio.h>
#include<string.h>
int max(float x,float y,float z)
{
	if(x>=y&&x>=z) return 1;
	if(y>=x&&y>=z) return 2;
	if(z>=x&&z>=y) return 3;
}
int main()
{
	struct student
	{
		int num;
		int score1;
		int score2;
		int score3;
		int average;
	};
	struct student s1={1,90,80,70,0},s2={2,85,75,95,0},s3={3,88,84,65,0};char a[10];
	gets(a);
	s1.average=(s1.score1+s1.score2+s1.score3)/3;
	s2.average=(s2.score1+s2.score2+s2.score3)/3;
	s3.average=(s3.score1+s3.score2+s3.score3)/3;
	if(strcmp(a,"max")==0) printf("%d\n",max(s1.average,s2.average,s3.average));
	else if(strcmp(a,"1")==0) printf("%d\n",s1.average);
	else if(strcmp(a,"2")==0) printf("%d\n",s2.average);
	else if(strcmp(a,"3")==0) printf("%d\n",s3.average);
	else printf("0");
}
