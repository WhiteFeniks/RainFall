#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef void(*t_func_ptr)(void);

void	m(void)
{
	puts("Nope");
}

void	n(void)
{
	system("/bin/cat /home/user/level7/.pass");
}

int	main(int argc, char **argv)
{
	char		*buf;
	t_func_ptr	*f;

	buf = malloc(64);
	f = malloc(4);
	*f = (void *)m;
	strcpy(buf, argv[1]);
	(**f)();
	return (0);
}
