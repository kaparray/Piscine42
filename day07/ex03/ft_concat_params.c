int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}


char *ft_concat_params(int argc, char **argv)
{
	int *arr_of_params;
	int i;
	int j;
	int k;
	int len;

	i = 1;
	size = 0;
	while (i < argc)
		len = len + ft_strlen(argv[i++]);
	arr_of_params = (char *)malloc(sizeof(char *) * (len));
	k = 0;
	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			arr_of_params[k++] = argv[i][j++];
		if (i == argc - 1)
			arr_of_params[k++] = '\0';
		else
			arr_of_params[k++] = '\n';
		i++
	}
	return (arr_of_params);
}