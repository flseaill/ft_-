#include <unistd.h>
#include <fcntl.h>

int 	ft_filelen(int fd)
{
	int 	c;
	int 	i;

	i = 0;
	while (read(fd, &c, 1) > 0)
	{
		i++;
		c++;
	}
	return (i);
}
