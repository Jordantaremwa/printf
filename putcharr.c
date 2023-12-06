#include	"main.h"

/**
 * putcharr	-	prints	a	character
 * @c:	char	input
 * Return:	1
 */

int	putcharr(char	c)
{
	return	(write(1,	&c,	1));
}
