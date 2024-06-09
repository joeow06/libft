#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*result;

	

}

int	main(void)
{
	char	*s1 = "Hello, world";

	char	*result = ft_strtrim(s1, 'o');
	printf("Result: %s\n", result);
	return (0);
}
