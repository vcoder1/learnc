/*this C program is aimed at counting tabs, blanks and newlines 
 * in the input given from the user.*/
#include<stdio.h>
main()
{
	int tabs, blanks, newlines;
	int c;
	tabs=blanks=newlines=0;
	while((c=getchar())!=EOF)
	{
		if(c==' ')
			blanks++;
		else if(c=='\n')
			newlines++;
		else if(c=='\t')
			tabs++;
	}
	printf("TABS:%d\nNEWLINES:%d\nBLANKS:%d\n", tabs, newlines, blanks);
}
