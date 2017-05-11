#include "libft.h"

int 	ft_filenl(int fd)
{
	int 	c;
	int 	i;

	i = 0;
	while (read(fd, &c, 1) > 0)
	{
		ft_putchar(c);
		if (ft_isnl(c))
			i++;
		c++;
	}
	return (i);
}