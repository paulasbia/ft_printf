#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int     ret;
	int     ret2;
	char    *s;
	int     d;

	s = "ola";
	d = 15;

	ret = ft_printf("ola %s %s %c %d %% %u %x %X %p\n", s, s, 'a', d,
			2147483648, d, d, &s);
	ret2 = printf("ola %s %s %c %d %% %u %x %X %p\n", s, s, 'a', d,
			(unsigned int)2147483648, d, d, &s);
	printf("%d\n", ret);
	printf("%d\n", ret2);
}
