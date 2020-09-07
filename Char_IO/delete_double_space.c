/*This is a program to copy its input to its output, replacing each string of one or
 * more blanks by a single blank*/
#include<stdio.h>
main()
{
	int c;
	int tank=0;
	while((c=getchar())!=EOF)
	{
		if(c==' ')
		{
			if(tank==0)
			{
				putchar(c);
				tank++;
			}
		}
		else
		{
			putchar(c);
			if(tank!=0)
				tank=0;
		}
	}
}
