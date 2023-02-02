#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	i = 1;

	ft_printf("%d\n", memory_add(&i, sizeof(i)));
}
