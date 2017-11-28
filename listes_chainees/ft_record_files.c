#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct info_files;
struct info_files
{
	char *filename;
	char *filetype;
	char *rights;
	char *m_date;
	char *c_date;
	info files *suivant;
};

typedef struct	Liste Liste;
struct Liste
{
	Element *premier;
};

Liste *lstnew()
{
	Liste *liste = malloc(sizeof(*liste));
	Element *element = malloc(sizeof(*element));

	if (liste == NULL || element == NULL)
		return (NULL);
	element->nombre = 0;
	element->suivant = NULL;
	liste->premier = element;

	return (liste);
}

void	*add_lst(Liste *liste, int nvNombre)
{
	Element *nouveau = malloc(sizeof(*nouveau));
	if (liste == NULL || nouveau == NULL)
		return (NULL);
	nouveau->nombre = nvNombre;

	nouveau->suivant = liste->premier;
	liste->premier = nouveau;
	return (NULL);
}

void	*del_lst(Liste *liste)
{
	if (liste == NULL)
		return (NULL);
	if (liste->premier != NULL)
	{
		Element *aSupprimer = liste->premier;
		liste->premier = liste->premier->suivant;
		free(aSupprimer);
	}
	return(NULL);
}

void	*print_lst(Liste *liste)
{
	if (liste == NULL)
		return (NULL);
	Element *actuel = liste->premier;

	while (actuel != NULL)
	{
		printf("%d -> ", actuel->nombre);
		actuel = actuel->suivant;
	}
	printf("NULL\n");
	return(NULL);;
}

int		main(void)
{
	Liste *maListe = lstnew();

	add_lst(maListe, 4);
	add_lst(maListe, 8);
	add_lst(maListe, 9);
	add_lst(maListe, 11);
	add_lst(maListe, 12);
	add_lst(maListe, 15);
	add_lst(maListe, 17);
	add_lst(maListe, 21);
	del_lst(maListe);

	print_lst(maListe);
	return (0);
}
