#include	"main.h"

/**
 * putsi	-	prints	string
 * @c:	string
 * Return:	numbaer	of	bytes
 */

int	putsi(char	*c)
{
	int	count	=	0;

	if	(c)
	{
		for	(count	=	0;	c[count]	!=	'\0';	count++)
		{
			putcharr(c[count]);
		}
	}
	return	(count);
}
