#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *tmp;
	int tempo;

	tmp = lst;
	tempo = 0;
	
	while(lst->next != NULL)
	{
		if(((cmp)(lst->data, lst->next->data)) == 0)
		{
			tempo = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tempo;
			lst = tmp;
		} else {
		lst = lst->next;
		}
		
	}
	return (tmp);
}
