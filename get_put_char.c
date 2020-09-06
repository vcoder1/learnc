#include<stdio.h>
/*program that uses getchar() and putchar(); version_0*/
main()
{
	int c;
	c=getchar();
	while(c!=EOF)
	{
		putchar(c);
		c=getchar();
	}

}
