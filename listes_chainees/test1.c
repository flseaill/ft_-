#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Element Element;
struct Element
{
	int nombre;
	Element *suivant;
};

typedef struct	t_list t_list;
struct t_list
{
	Element *premier;
};

int		main(void)
{
	t_list **maListe = ft_lstnew(Element, 4);

	ft_lstadd(maListe, 4);
	ft_lstadd(maListe, 8);
	ft_lstadd(maListe, 15);
	ft_lstdel(maListe, );

	print_lst(maListe);
	return (0);
}
