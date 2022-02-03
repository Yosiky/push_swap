#include "ft_lib_mod.h"

static int	ft_isspace(char c)
{
	return (c == '\f' || c == '\n' || c == '\r' ||
			c == '\t' || c == '\v' || c == ' ');
}

static int	ft_issing(char c)
{
	return (c == '-' || c == '+');
}

static int	ft_isnum(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_atoi(int64_t *ptr_res, char *res)
{
	int64_t	sign;

	if (ptr_res == NULL)
		return (1);
	sign = 1;
	*ptr_res = 0;
	while (ft_isspace(*res))
		res++;
	while (ft_issign(*res))
		if (*(res++) == '-')
			sign *= -1;
	while (*res != '\0')
	{
		if (ft_isnum(*res))
			*ptr_res = *ptr_res * 10 + *res - '0';
		else
			return (2);
		if (*ptr_res < 0)
			return (3);
	}
	*ptr_res *= sing;
	return (0);
}
