/*This program is aimed at cheating c
 * this will check whether EOF is same 
 * as Ctrl + C
 * EDIT: The answer is ... no
 *       On windows, EOF can simulated by Ctrl-Z
 *       On unix/linux, EOF can simulated by Ctrl-D
 * */
#include <stdio.h>
main()
{
	while(getchar()==EOF)
	{
		printf("You:EOF!\nEOF: You Called Me?\n");
		continue;
	}
	printf("EOF: BYE!\n");
}
