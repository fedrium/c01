int		ft_strlen(char *str);

int		ft_strlen(char *str)
{
	int lenght;
	lenght = (sizeof(*str) / 4);
	return lenght;
}