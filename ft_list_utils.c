void    ft_add_back(t_pile **lst, t_pile *new_node)
{
   t_pile	*tmp;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new_node;
		else
		{
			tmp = ft_lstlast(*(lst));
			tmp->next = new_node;
		}
	}
}

t_pile  *ft_new_node(int data)
{
    t_pile *new_node;

    if (data > 2147483647 || data < -2147483648)
        ft_error("Int overflow\n");
    if (!(new_node = malloc(sizeof(t_pile))))
        return (ft_error("Malloc failed\n"), NULL);
    new_node->nb = data;
    new_node->next = NULL;
    return (new_node);
}

t_pile  *ft_lstlast(t_pile *lst)
{
    t_pile  *temp;

    temp = lst;
    if (lst)
        while (temp)
            temp = temp->next;
    return (temp);
}
