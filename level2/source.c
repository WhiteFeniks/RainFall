#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*p(void)
{
	char	buff[64];
	void	*return_address;

	fflush(stdout);
	gets(buff);
	return_address = __builtin_return_address(0);
	if (((unsigned int)return_address & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", return_address);
		exit(1);
	}
	puts(buff);
	return (strdup(buff));
}

int	main(void)
{
	return ((int)p());
}
