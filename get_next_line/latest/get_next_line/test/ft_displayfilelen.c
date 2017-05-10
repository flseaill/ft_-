void	ft_displayfilelen(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	ft_putstr("Le fichier fait ");
	ft_putnbr(ft_filelen(fd));
	ft_putstr(" characteres de long.\n");
	close(fd);
	fd = open(filename, O_RDONLY);
	ft_putstr("Le fichier fait ");
	ft_putnbr(ft_filenl(fd));
	ft_putstr(" lignes de long.\n");
	close(fd);
}


int		main(int argc, char **argv)
{
	if (argc == 2)
	{		
		ft_displayfilelen(argv[1])
	}
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	return (0);
}
