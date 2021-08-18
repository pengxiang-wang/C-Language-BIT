#include <stdio.h>  
#include <stdlib.h>
#include<string.h>  
static char str[100];
void reverse(char str[],int start,int end)
{
	int i;char m;
	if(end>strlen(str)) end=strlen(str)-1;
	for(i=0;i<=(end-start)/2;i++)
	{
		m=str[i+start];str[i+start]=str[end-i];str[end-i]=m;
	}
  }  
int main( )  
{    
    int start, end;  
    gets(str);  
    scanf("%d%d", &start, &end);  
    reverse( str, start, end );  
    printf("%s\n", str);  
    return 0;  
}

