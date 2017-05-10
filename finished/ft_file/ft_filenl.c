#include <unistd.h>
#include <fcntl.h>

int		ft_isnl(int c)
{
	if (c == '\n')
		return (1);
	return (0);
}

int 	ft_filenl(int fd)
{
	int	c;
	int	i;

	i = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (ft_isnl(c))
			i++;
		c++;
	}
	return (i);
}
