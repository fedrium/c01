void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	write(1, *str, sizeof(*str));
}

int		main()
{
    ft_putstr("JOHN");
    return 0;
}