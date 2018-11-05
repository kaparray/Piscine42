#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * len);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return(len);
}