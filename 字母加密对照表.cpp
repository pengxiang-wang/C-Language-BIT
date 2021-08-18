#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];int i; 
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		switch (a[i])
		{
			case 'a':putchar('d');break;
			case 'b':putchar('w');break;
			case 'c':putchar('k');break;
			case 'd':putchar(';');break;
			case 'e':putchar('i');break;
			case 'i':putchar('a');break;
			case 'k':putchar('b');break;
			case ';':putchar('c');break;
			case 'w':putchar('e');break;
			default :printf("%c",a[i]);
		}
	}
	putchar('\n');
}
