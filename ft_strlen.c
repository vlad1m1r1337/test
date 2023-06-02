#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
//to_lower
int	main(void)
{
	char *str = "zxc";
	printf("%zu", ft_strlen(str));
	return (0);
}
